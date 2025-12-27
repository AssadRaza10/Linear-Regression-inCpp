# Manual Linear Regression

## Summary

This small C++ project implements a manual (from-scratch) simple linear regression (ordinary least squares) for a tiny in-memory dataset. It computes the slope (beta1) and intercept (beta0) and prints predicted y values for each x in the sample.

## Files

- [Linear Regression.cpp](Linear%20Regression.cpp): The single source file that defines the dataset, computes means, computes `beta1` and `beta0`, and prints predictions.

## Algorithm / Implementation

- The program computes the mean of x and y.
- It computes beta1 as: numerator = sum((xi - x_mean)*(yi - y_mean)); denominator = sum((xi - x_mean)^2); beta1 = numerator/denominator.
- It computes beta0 as: beta0 = y_mean - beta1 * x_mean.
- Finally it prints predicted values `y_pred = beta0 + beta1 * x` for each sample x.

The implementation is intentionally compact and educational; it uses plain arrays and simple loops.

## Build & Run

On Windows you can compile with a g++ toolchain (e.g., MinGW) or with Visual Studio's compiler.

- With g++ (MinGW or similar):

```bash
g++ -std=c++11 -O2 "Linear Regression.cpp" -o linear_regression.exe
./linear_regression.exe
```

- With Microsoft Visual C++ (from Developer Command Prompt):

```bash
cl "Linear Regression.cpp"
linear_regression.exe
```

## Example (sample dataset in the code)

The hard-coded dataset in the file is:

- (5, 11)
- (4, 8)
- (7, 14)
- (2, 5)

Computed model parameters (approx.):

- beta1 (slope): 1.8461538
- beta0 (intercept): 1.1923077

Predictions printed by the program (approx.):

- y_pred[0] ≈ 10.4231
- y_pred[1] ≈ 8.5769
- y_pred[2] ≈ 14.1154
- y_pred[3] ≈ 4.8846

## Notes & Next steps

- This is intended as an educational example. Possible improvements:
  - Accept input from a file or stdin instead of the hard-coded array.
  - Add error handling for zero variance in x (denominator = 0).
  - Add unit tests and formatting of floating output.

If you'd like, I can (a) update the code to accept CSV input, (b) add basic tests, or (c) format the printed output.
