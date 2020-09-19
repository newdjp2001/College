class Animal{
	void cellular()
	{
		System.out.println("They are multicellular organism");
	}
}

class Mammals extends Animal{
	void mammalia()
	{
		System.out.println("They have mammary glands and hair");
	}
}

class Dog extends Mammals{
	void character(){
		System.out.println("They are loyal and bark.");
	}
}

public class MultiLevel {

	public static void main(String[] args) {
		System.out.println("Characteristics of a Dog");
		Dog dog = new Dog();
		dog.cellular();
		dog.mammalia();
		dog.character();
	}

}
