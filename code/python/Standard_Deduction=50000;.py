print('Adarsh Kumar Mishra 21SCSE1011370 Section-17')
Standard_Deduction=50000;

Dedc_80c = int(input("Dedc_80c = : "))
print(Dedc_80c)
Dedc_80cc = int(input("Dedc_80cc = : "))
print(Dedc_80cc)
Dedc_HRA = int(input("Dedc_HRA = : "))
print(Dedc_HRA)
Dedc_Medical = int(input("Dedc_Medical = : "))
print(Dedc_Medical)
print()
Ded_tot = (Dedc_80c+ Dedc_80cc+ Dedc_HRA+ Dedc_Medical+Standard_Deduction)
Gross_Income = int(input("Gross_Income = : "))
print(Gross_Income)
Tax_Income = Gross_Income - Ded_tot;
if (Tax_Income > 0) and (Gross_Income <= 500000):
    Income_Tax = Tax_Income * .1;
if (Gross_Income <= 1000000) and (Gross_Income > 500000):
    Income_Tax = 25000 + ((Gross_Income - 500000)* .2);
if (Gross_Income > 1000000):
    Income_Tax = 75000 + ((Gross_Income - 1000000) *.3);
    print("Gross_Income = ",Gross_Income)
    print("Total Deductions = ",Ded_tot)
    print("Income Tax = ",Income_Tax)
else:
    print("No Income Tax is to be deducted")