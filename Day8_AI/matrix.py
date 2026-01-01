import numpy as np

#3x3 Matrix (Grid) using NumPy
# AI uses these "tensors" to store data (images, text, logic)
matrix = np.array([
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
])

print("--- My First AI Matrix ---")
print(matrix)

#Mean instantly without a loop
print(f"\nAverage value: {np.mean(matrix)}")

# 3. Transpose (Flip it sideways)
print("\n--- Transposed Matrix ---")
print(matrix.T)

print("\nSystem Status: AI Environment Ready. 🚀")