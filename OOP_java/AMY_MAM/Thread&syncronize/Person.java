public class Person {
    String name;
    int age;

    static int count = 0;
    Person(){
        
        System.out.println(count);
    }
    Person(String name, int age){
        this.name = name;
        this.age = age;
        // count++;
        // System.out.println(count);
        this(age);
    }
    Person(int age){
        // this();
        this.age = age;
        count++;
    }
}
