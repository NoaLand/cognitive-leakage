import CognitiveLeakage

def main : IO Unit := do
  IO.println "Cognitive Leakage formal model"
  IO.println "Verified modules:"

  for model in models do
    IO.println s!"- {model}"
