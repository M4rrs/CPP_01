# C++ Module 01

Learning about memory allocation, pointers and references, pointers to members, pointers to member functions, and switch statements.

* [Exercise 00](#exercise-00-braiiiiiiinnnzzzz)
* [Exercise 01](#exercise-01-moar-brainz)
* [Exercise 02](#exercise-02-hi-this-is-brain)
* [Exercise 03](#exercise-03-unnecessary-violence)
* [Exercise 04](#exercise-04-sed-is-for-losers)
* [Exercise 05](#exercise-05-harl-20)
* [Exercise 06](#exercise-06-harl-filter)

## Exercise 00:  BraiiiiiiinnnzzzZ
Create a Zombie class, name the zombies, and the zombies announce themselves.

The difference is that you determine which zombie is allocated on Stack memory, and the other on Heap memory.

The zombies must be destroyed when the program ends.

![Zombie](https://cdn.discordapp.com/attachments/989407433858375683/1085165220965646487/Screenshot_2023-03-14_at_19.37.43.png)

## Exercise 01: Moar brainz!
Create a horde of Zombies.

syntax:
```Zombie* zombieHorde( int N, std::string name );```

Allocate N Zombies in a single allocation, name them, and the zombies announce themselves.

Not much difference from Exercise 00.

![Zombie](https://cdn.discordapp.com/attachments/989407433858375683/1085166676280086559/Screenshot_2023-03-14_at_19.44.44.png)

## Exercise 02: HI THIS IS BRAIN
A pretty simple exercise. All you need to understand and show is the difference between a pointer and a reference.

![String](https://cdn.discordapp.com/attachments/989407433858375683/1085167415060611116/Screenshot_2023-03-14_at_19.47.40.png)

## Exercise 03: Unnecessary violence
This exercise was a little tricky.
* First implement a **Weapon** class.
* Then, implement two classes **HumanA** and **HumanB**.
* They both have:
	* A weapon
	* A name
	* and member function **attack()**

* The difference between the two classes:
	* **HumanA** takes the weapon in its constructor, **HumanB** doesn't
	* **HumanB** may not always have a Weapon, whereas **HumanA** will always be armed.

![Humans](https://cdn.discordapp.com/attachments/989407433858375683/1085397669498851430/Screenshot_2023-03-15_at_11.02.39.png)
## Exercise 04: Sed is for losers
This exercise touches on file manipulation.

The program takes in 3 parameters:

	```[ ./sed <filename> <string to replace> <replacement string> ]```
![Sed](https://cdn.discordapp.com/attachments/989407433858375683/1085398865055858788/Screenshot_2023-03-15_at_11.07.27.png)
![File](https://cdn.discordapp.com/attachments/989407433858375683/1085399042638483536/Screenshot_2023-03-15_at_11.08.07.png)
![newFile](https://cdn.discordapp.com/attachments/989407433858375683/1085399114822463580/Screenshot_2023-03-15_at_11.08.26.png)

## Exercise 05: Harl 2.0
This exercise implements the use of function pointers.

Harl is your average Karen. The comments he makes are classified by level:
* **DEBUG** level: Debug messages contain contextual information. They are mostly
used for problem diagnosis.
* **INFO** level: These messages contain extensive information. They are helpful for
tracing program execution in a production environment.
* **WARNING** level: Warning messages indicate a potential issue in the system.
However, it can be handled or ignored.
* **ERROR** level: These messages indicate an unrecoverable error has occurred.
This is usually a critical issue that requires manual intervention.
You can choose to write your own comments, or use the examples given in the pdf.

You **must** use **pointers to member functions** for this exercise, no if/else if/else.

![Harl](https://cdn.discordapp.com/attachments/989407433858375683/1085402656509526096/Screenshot_2023-03-15_at_11.22.31.png)
![Harl](https://cdn.discordapp.com/attachments/989407433858375683/1085402746947121213/Screenshot_2023-03-15_at_11.22.54.png)
![Harl](https://cdn.discordapp.com/attachments/989407433858375683/1085402955450155068/Screenshot_2023-03-15_at_11.23.39.png)
## Exercise 06: Harl filter
Harl, but switch..case version.
* The program takes in one of the four Harl comment levels.
* It will display all messages from this level and above.

![harlFilter](https://cdn.discordapp.com/attachments/989407433858375683/1085404249925623869/Screenshot_2023-03-15_at_11.28.19.png)