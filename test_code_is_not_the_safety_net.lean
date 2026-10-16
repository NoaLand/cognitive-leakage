-- 有测试代码
opaque HasTestCode : Prop

-- 团队理解系统中的测试用例
opaque TeamUnderstandsTests : Prop

-- 有测试防护网
opaque HasTestSafetyNet : Prop

-- 团队理解是团队具备测试防护网的必要条件
axiom safety_net_requires_understanding :
  HasTestSafetyNet -> TeamUnderstandsTests

-- 不理解测试代码意味着没有测试防护网
theorem lack_of_understanding_is_not_a_safety_net
    (teamDoesNotUnderstandTests : ¬ TeamUnderstandsTests) :
    ¬ HasTestSafetyNet := by
  intro hasSafetyNet

  have teamUnderstandTests : TeamUnderstandsTests :=
    safety_net_requires_understanding hasSafetyNet

  exact teamDoesNotUnderstandTests teamUnderstandTests

-- 测试代码不是测试防护网
theorem has_test_code_does_not_imply_has_the_test_safety_net
    (hasTestCode : HasTestCode)
    (teamDoesNotUnderstandTests : ¬ TeamUnderstandsTests) :
    HasTestCode ∧ ¬ HasTestSafetyNet := by

  have hasNoTestSafetyNet : ¬ HasTestSafetyNet :=
    lack_of_understanding_is_not_a_safety_net teamDoesNotUnderstandTests

  exact And.intro hasTestCode hasNoTestSafetyNet
