class Temperature:
    def convertToFahrenheit(self, celsius):
        fahrenheit = (celsius * 9/5) + 32
        print(f"{celsius} degrees Celsius is equal to {fahrenheit} degrees Fahrenheit.")

    def convertToCelsius(self, fahrenheit):
        celsius = (fahrenheit - 32) * 5/9
        print(f"{fahrenheit} degrees Fahrenheit is equal to {celsius} degrees Celsius.")


temp = Temperature()

celsius_input = float(input("Enter the temperature in Celsius: "))
temp.convertToFahrenheit(celsius_input)

fahrenheit_input = float(input("Enter the temperature in Fahrenheit: "))
temp.convertToCelsius(fahrenheit_input)