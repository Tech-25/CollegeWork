class PowerCalculator:
    def power(self, x, n):
        result = 1

        if n >= 0:
            for _ in range(n):
                result *= x
        else:
            for _ in range(-n):
                result /= x

        return result


# Create an instance of PowerCalculator
calculator = PowerCalculator()

# Test the power() method
base = float(input("Enter the base: "))
exponent = int(input("Enter the exponent: "))

result = calculator.power(base, exponent)
print(f"{base} raised to the power of {exponent} is {result}")