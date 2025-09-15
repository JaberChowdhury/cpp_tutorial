# banking system

```txt
[direction down]

Start[shape: circle, text: "Start Program"]

MainMenu[icon: question, text: "Main Menu:\n1. Bank Admin\n2. Bank User\n3. Add User\n4. Exit"]

ChoiceMain[shape: diamond, text: "User selects option"]

Exit[shape: circle, text: "Program End"]

# --- Admin Flow ---
AdminLogin[shape: rectangle, text: "Enter Admin Password"]

AdminCheck[shape: diamond, text: "Password Correct?"]

AdminMenu[icon: question, text: "Admin Menu:\n1. Add User\n2. Remove User\n3. View All Users\n4. Back"]

AdminChoice[shape: diamond, text: "Admin selects option"]

AddUser[shape: rectangle, text: "Add User (Enter details)"]
RemoveUser[shape: rectangle, text: "Remove User by ID"]
ViewUsers[shape: rectangle, text: "Display All Users"]

# --- User Flow ---
UserLogin[shape: rectangle, text: "Enter User ID & Password"]

UserCheck[shape: diamond, text: "Valid Credentials?"]

UserMenu[icon: question, text: "User Menu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Check Info\n5. Back"]

UserChoice[shape: diamond, text: "User selects option"]

Deposit[shape: rectangle, text: "Deposit Money"]
Withdraw[shape: rectangle, text: "Withdraw Money"]
CheckBalance[shape: rectangle, text: "Show Balance"]
CheckInfo[shape: rectangle, text: "Show User Info"]

# --- Add User Direct from Main ---
QuickAdd[shape: rectangle, text: "Add User (Default Balance 100)"]

# --- Flow connections ---
Start > MainMenu
MainMenu > ChoiceMain

ChoiceMain > AdminLogin : Option 1
ChoiceMain > UserLogin : Option 2
ChoiceMain > QuickAdd : Option 3
ChoiceMain > Exit : Option 4

# Admin flow
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

# User flow
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

# Quick add user
QuickAdd > MainMenu
```

# calculator

```txt
direction down

Start[shape: circle, text: "Start Program"]

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

Choice > Addition : Option 1
Choice > Subtraction : Option 2
Choice > Multiplication : Option 3
Choice > Division : Option 4
Choice > TrigMenu : Option 5
Choice > Logarithm : Option 6
Choice > Exit : Option 7

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

```

# hierarchical

```txt
[direction down]

Start[shape: circle, text: "Start Program"]

BaseClass[shape: rectangle, text: "Class Student\n- name\n- id\n- gpa\n+ print()"]

Derived1[shape: rectangle, text: "Class Hasan : Student"]
Derived2[shape: rectangle, text: "Class Sifat : Student"]
Derived3[shape: rectangle, text: "Class Masum : Student"]

MainFunc[shape: rectangle, text: "main() function"]

Obj1[shape: rectangle, text: "Create Hasan object\nSet name, id, gpa\nCall print()"]
Obj2[shape: rectangle, text: "Create Sifat object\nSet name, id, gpa\nCall print()"]
Obj3[shape: rectangle, text: "Create Masum object\nSet name, id, gpa\nCall print()"]

End[shape: circle, text: "End Program"]

Start > BaseClass
BaseClass > Derived1
BaseClass > Derived2
BaseClass > Derived3

Derived1 > MainFunc
Derived2 > MainFunc
Derived3 > MainFunc

MainFunc > Obj1
Obj1 > Obj2
Obj2 > Obj3
Obj3 > End

```

# hybrid

```txt
[direction down]

Start[shape: circle, text: "Start Program"]

Person[shape: rectangle, text: "Class Person\n- name\n- age"]

Employee[shape: rectangle, text: "Class Employee : Person\n- id"]
Student[shape: rectangle, text: "Class Student : Person\n- roll"]

InternStudent[shape: rectangle, text: "Class InternStudent : Employee, Student\n- salary"]

MainFunc[shape: rectangle, text: "main() function"]

ObjCreation[shape: rectangle, text: "Create InternStudent object\n(jaber, 21, roll=70002, id=21231, salary=2124565)"]

End[shape: circle, text: "End Program"]

Start > Person
Person > Employee
Person > Student
Employee > InternStudent
Student > InternStudent
InternStudent > MainFunc
MainFunc > ObjCreation
ObjCreation > End

```

# multilevel

```txt
[direction down]

Start[shape: circle, text: "Start Program"]

# Base class
Animal[shape: rectangle, text: "Class Animal\n+ eat()"]

# First derived
Mammal[shape: rectangle, text: "Class Mammal : Animal\n+ Walk()"]

# Second derived (from Mammal)
Dog[shape: rectangle, text: "Class Dog : Mammal\n+ Bark()"]

MainFunc[shape: rectangle, text: "main() function"]

ObjCreation[shape: rectangle, text: "Create Dog object (bob)\nCall eat(), Walk(), Bark()"]

End[shape: circle, text: "End Program"]

# Connections
Start > Animal
Animal > Mammal
Mammal > Dog
Dog > MainFunc
MainFunc > ObjCreation
ObjCreation > End

```

# single

```txt
[[direction down]]

Start[shape: circle, text: "Start Program"]

# Base class
Item[shape: rectangle, text: "Class Item\n+ isEatable : bool\n+ rating : float"]

# Derived class
Sunglass[shape: rectangle, text: "Class Sunglass : Item\n+ isAvailable : bool\n+ print_info()"]

MainFunc[shape: rectangle, text: "main() function"]

ObjCreation[shape: rectangle, text: "Create Sunglass object (s1)\nCall print_info()"]

End[shape: circle, text: "End Program"]

# Connections
Start > Item
Item > Sunglass
Sunglass > MainFunc
MainFunc > ObjCreation
ObjCreation > End

```

# multiple

```txt
[[direction down]]

Start[shape: circle, text: "Start Program"]

# Base classes
Base1[shape: rectangle, text: "Class Base_class_one\n+ print_one()"]
Base2[shape: rectangle, text: "Class Base_class_two\n+ print_two()"]
Base3[shape: rectangle, text: "Class Base_class_three\n+ print_three()"]

# Derived class
Derived[shape: rectangle, text: "Class Derived_class :\nBase_class_one, Base_class_two, Base_class_three\n+ print()"]

MainFunc[shape: rectangle, text: "main() function"]

ObjCreation[shape: rectangle, text: "Create Derived_class object (d)\nCall print() → calls\nprint_one(), print_two(), print_three()"]

End[shape: circle, text: "End Program"]

# Connections
Start > Base1
Start > Base2
Start > Base3
Base1 > Derived
Base2 > Derived
Base3 > Derived
Derived > MainFunc
MainFunc > ObjCreation
ObjCreation > End

```
