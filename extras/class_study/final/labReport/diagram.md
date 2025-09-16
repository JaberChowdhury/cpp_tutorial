# banking system

```txt
direction down
colorMode bold
styleMode plain
typeface mono

Start[shape: circle, text: "Start Program"]

End[shape: circle, text: "Start Program"]

MainMenu[ text: "Main Menu:\n1. Bank Admin\n2. Bank User\n3. Add User\n4. Exit"]

ChoiceMain[shape: diamond, text: "User selects option"]

Exit[shape: circle, text: "Program End"]

AdminLogin[shape: rectangle, text: "Enter Admin Password"]

AdminCheck[shape: diamond, text: "Password Correct?"]

AdminMenu[text: "Admin Menu:\n1. Add User\n2. Remove User\n3. View All Users\n4. Back"]

AdminChoice[shape: diamond, text: "Admin selects option"]

AddUser[shape: rectangle, text: "Add User (Enter details)"]
RemoveUser[shape: rectangle, text: "Remove User by ID"]
ViewUsers[shape: rectangle, text: "Display All Users"]

UserLogin[shape: rectangle, text: "Enter User ID & Password"]

UserCheck[shape: diamond, text: "Valid Credentials?"]

UserMenu[ text: "User Menu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Check Info\n5. Back"]

UserChoice[shape: diamond, text: "User selects option"]

Deposit[shape: rectangle, text: "Deposit Money"]
Withdraw[shape: rectangle, text: "Withdraw Money"]
CheckBalance[shape: rectangle, text: "Show Balance"]
CheckInfo[shape: rectangle, text: "Show User Info"]

QuickAdd[shape: rectangle, text: "Add User (Default Balance 100)"]

Start > MainMenu
MainMenu > ChoiceMain

ChoiceMain > AdminLogin : Option 1
ChoiceMain > UserLogin : Option 2
ChoiceMain > QuickAdd : Option 3
ChoiceMain > Exit : Option 4

AdminLogin > AdminCheck
AdminCheck > AdminMenu : Yes
AdminCheck > MainMenu : No

AdminMenu > AdminChoice

AdminChoice > AddUser : Option 1
AdminChoice > RemoveUser : Option 2
AdminChoice > ViewUsers : Option 3
AdminChoice > MainMenu : Back

AddUser > AdminMenu
RemoveUser > AdminMenu
ViewUsers > AdminMenu

UserLogin > UserCheck
UserCheck > UserMenu : Yes
UserCheck > MainMenu : No

UserMenu > UserChoice

UserChoice > Deposit : Option 1
UserChoice > Withdraw : Option 2
UserChoice > CheckBalance : Option 3
UserChoice > CheckInfo : Option 4
UserChoice > MainMenu : Back

Deposit > UserMenu
Withdraw > UserMenu
CheckBalance > UserMenu
CheckInfo > UserMenu

QuickAdd > MainMenu

Exit > End
```

# calculator

```txt
direction down
typeface mono
colorMode bold
styleMode watercolor

Start[shape: circle, text: "Start Program"]
End[shape: circle, text: "Start Program"]

ShowMenu[ text: "Display Main Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Trigonometry\n6. Logarithm\n7. Exit"]

Choice[shape: diamond, text: "User selects option"]

Addition[shape: rectangle, text: "Perform Addition"]
Subtraction[shape: rectangle, text: "Perform Subtraction"]
Multiplication[shape: rectangle, text: "Perform Multiplication"]
Division[shape: rectangle, text: "Perform Division"]
Logarithm[shape: rectangle, text: "Perform Logarithm"]

TrigMenu[ text: "Trigonometry Menu:\n1. sin(x)\n2. cos(x)\n3. tan(x)\n4. Back to Main"]

TrigChoice[shape: diamond, text: "User selects trig option"]

SinOp[shape: rectangle, text: "Compute sin(x)"]
CosOp[shape: rectangle, text: "Compute cos(x)"]
TanOp[shape: rectangle, text: "Compute tan(x)"]

Exit[shape: circle, text: "Program End"]

Start > ShowMenu
ShowMenu > Choice

// Choice > Addition : Option 1
// Choice > Subtraction : Option 2
// Choice > Multiplication : Option 3
// Choice > Division : Option 4
// Choice > TrigMenu : Option 5
// Choice > Logarithm : Option 6
// Choice > Exit : Option 7
Choice > Addition  ,Subtraction,Multiplication,Division,TrigMenu,Logarithm,Exit

Addition > ShowMenu
Subtraction > ShowMenu
Multiplication > ShowMenu
Division > ShowMenu
Logarithm > ShowMenu

TrigMenu > TrigChoice

TrigChoice > SinOp : sin(x)
TrigChoice > CosOp : cos(x)
TrigChoice > TanOp : tan(x)
TrigChoice > ShowMenu : Back

SinOp > ShowMenu
CosOp > ShowMenu
TanOp > ShowMenu
Exit > End
```

# hierarchical

```txt
direction down
colorMode bold
typeface mono
styleMode plain


Baseclass[shape:circle]
DerivedClass-1[shape:circle]
DerivedClass-2[shape:circle]
DerivedClass-3[shape:circle]


Baseclass > DerivedClass-1
Baseclass > DerivedClass-2
Baseclass > DerivedClass-3

```

# hybrid

```txt
direction down
colorMode bold
styleMode watercolor
typeface mono

Person[shape: rectangle, text: "Class Person\n- name\n- age"]

Employee[shape: rectangle, text: "Class Employee : Person\n- id"]
Student[shape: rectangle, text: "Class Student : Person\n- roll"]

InternStudent[shape: rectangle, text: "Class InternStudent : Employee, Student\n- salary"]

Person > Employee
Person > Student
Employee > InternStudent
Student > InternStudent

```

# multilevel

```txt
direction down
colorMode bold
typeface mono
styleMode watercolor

Animal[shape: rectangle, text: "Class Animal\n+ eat()"]

Mammal[shape: rectangle, text: "Class Mammal : Animal\n+ Walk()"]

Dog[shape: rectangle, text: "Class Dog : Mammal\n+ Bark()"]


Animal > Mammal
Mammal > Dog

```

# single

```txt
direction right
colorMode bold
styleMode plain
typeface mono

Base[shape: rectangle, text: "Class Item\n+ isEatable : bool\n+ rating : float"]

Derived[shape: rectangle, text: "Class Sunglass : Item\n+ isAvailable : bool\n+ print_info()"]


Base > Derived
```

# multiple

```txt
direction down
colorMode bold
styleMode watercolor
typeface mono

Base1[shape: rectangle, text: "Class Base_class_one\n+ print_one()"]
Base2[shape: rectangle, text: "Class Base_class_two\n+ print_two()"]
Base3[shape: rectangle, text: "Class Base_class_three\n+ print_three()"]


Base1 > Derived
Base2 > Derived
Base3 > Derived


```
