class Student {

    String name;
    int age;

    // Constructor 1: No parameter
    Student() {
        name = "makai";
        age = 19;
    }

    // Constructor 2: One parameter
    Student(String n) {
        name = "jhon";
        age = 15;
    }

    // Constructor 3: Two parameters
    Student(String n, int a) {
        name = "koki";
        age = 12;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {

        Student s1 = new Student();
        Student s2 = new Student("Ansel");
        Student s3 = new Student("John", 20);

        s1.display();
        s2.display();
        s3.display();
    }
}