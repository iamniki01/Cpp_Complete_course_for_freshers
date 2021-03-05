1)Accessibility in Public Inheritance


Accessibility |private |protected |public members
Base Class    |	Yes    |Yes	  |Yes
Derived Class | Yes    |Yes	  |Yes


2)Accessibility in protected Inheritance


Accessibility |private |protected |public members
Base Class    |	Yes    |Yes	  |Yes
Derived Class |No      |Yes	  |Yes(*)


2)Accessibility in private Inheritance


Accessibility |private |protected |public members
Base Class    |	Yes    |Yes	  |Yes
Derived Class | No      |Yes (**) |Yes (**)


here, * is inherited as protected variables 
	** is inherited as private variables