class calculator:
    brand = "casio MS E110"

    def add(self,num1,num2):
        result = num1 + num2
        return result
    def ded(self,num1,num2):
        result = num1 - num2
        return result
    def mul(self,num1,num2):
        result = num1 * num2
        return result
    def div(self,num1,num2):
        result = num1 // num2
        return result

my_cal = calculator()

sum = my_cal.add(10,20)
print("Summition is: ",sum)

deduct = my_cal.ded(45,12)
print("Deduction is: ",deduct)

multi = my_cal.mul(3,5)
print("Multiplication is: ",multi)

Division = my_cal.div(234,54)
print("Division is: ",Division)