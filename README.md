# Cognitive Leakage

[![Cognitive Leakage CI](https://github.com/NoaLand/cognitive-leakage/actions/workflows/cognitive-leakage.yaml/badge.svg)](https://github.com/NoaLand/cognitive-leakage/actions/workflows/cognitive-leakage.yaml)

[![License](https://img.shields.io/badge/License-Apache_2.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

A small Lean 4 project exploring how ideas around **cognitive leakage**, **cognitive sovereignty**, and software engineering knowledge can be expressed as explicit formal arguments.

The project starts from a simple claim:

> **Test code is not the test safety net.**

The goal is not to use Lean to prove that these ideas are universally true in software engineering. Instead, Lean is used to make assumptions explicit, test whether conclusions actually follow from them, and expose hidden gaps in the argument.

## Current formalised claims

- **Test Code Is Not The Test Safety Net**
  - A test safety net requires team understanding.
  - Lack of that understanding implies the absence of a test safety net.
  - Therefore, the existence of test code alone does not imply the existence of a test safety net.

## Approach

The model is developed incrementally:

1. Express the claim as a theorem.
2. Introduce the minimum concepts and assumptions required to state it.
3. Make hidden assumptions explicit.
4. Replace provisional abstractions with more precise models over time.
5. Keep existing theorems valid as the model evolves.

In that sense, the project is somewhat like **TDD for an argument**.

## Build

```bash
lake build
```

To print the currently included formalised models:

```bash
lake exe cognitive-leakage
```

## Status

Very early and intentionally incomplete.

The current model still contains abstract propositions and explicit axioms. These are expected to evolve as the underlying concepts are refined.

---

## License

Licensed under the **Apache License 2.0**.

See `LICENSE` for details.

---

*Copyright © 2026 Edward NoaLand.*