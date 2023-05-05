//Mahmoud mohammed ahmed
// id 20176496
package BankSystem;

class human {
    private String Name;
    private int Age;
    private String Gender;

    human(String Name, int Age, String Gender){
        this.Name = Name;
        this.Age = Age;
        this.Gender = Gender;
    }

    void PrintData(){
        System.out.println("Name: " + Name + ", Age: " + Age + ", Gender: " + Gender);
    }

    final void Greet(){
        System.out.println("Good Morning");
    }
}

----------------------------------------------------------------------------------
//Mahmoud mohammed ahmed
// id 20176496
package BankSystem;

class employee extends human {
    private double salary;
    private String department;

    employee(String Name, int Age, String Gender, double salary, String department){
        super(Name, Age, Gender);
        this.salary = salary;
        this.department = department;
    }

    void PrintData(){
        super.PrintData();
        System.out.println("Salary: " + salary + ", Department: " + department);
    }

    double getSalary(){
        return salary;
    }

    String getDepartment(){
        return department;
    }
}
---------------------------------------------------------------------------------------------------

//Mahmoud mohammed ahmed
// id 20176496
package BankSystem;

final class BankAccount {
    private double balance;

    double getBalance(){
        return balance;
    }

    void setBalance(double balance){
        if(balance < 0 || balance > 1000000){
            System.out.println("Invalid balance value!");
            return;
        }
        this.balance += balance;
    }

    void setBalance(double balance, double Tax){
        double newBalance = balance - (balance * (Tax/100));
        if(newBalance < 0 || newBalance > 1000000){
            System.out.println("Invalid balance value!");
            return;
        }
        this.balance += newBalance;
    }

    double getBalancePlusTenPercent(){
        return balance + (balance * 0.1);
    }
}
-------------------------------------------------------------------------------------------
//Mahmoud mohammed ahmed
// id 20176496
package BankSystem;

class customer extends human {
    private int SSN;
    private String Address;
    private BankAccount bankAccount;

    customer(String Name, int Age, String Gender, int SSN, String Address){
        super(Name, Age, Gender);
        this.SSN = SSN;
        this.Address = Address;
        bankAccount = new BankAccount();
    }
}


-------------------------------------------------------------------------------------------

//Mahmoud mohammed ahmed
// id 20176496
package BankSystem;

public class Main {
    public static void main(String[] args) {
        employee emp = new employee("John", 30, "Male", 5000, "IT");
        emp.PrintData();
        System.out.println("Salary: " + emp.getSalary() + ", Department: " + emp.getDepartment());

        BankAccount account1 = new BankAccount();
        account1.setBalance(1000);
        System.out.println("Balance of account1: " + account1.getBalancePlusTenPercent());

        BankAccount account2 = new BankAccount();
        account2.setBalance(500, 10);
        System.out.println("Balance of account2: " + account2.getBalancePlusTenPercent());

        customer cust = new customer("Alice", 25, "Female", 12345, "123 Main St.");
        cust.PrintData();
    }
}

--------------------------------------------------------------------------------------------------

//OUT PUT
//Name: John, Age: 30, Gender: Male
//Salary: 5000.0, Department: IT
//Salary: 5000.0, Department: IT
//Balance of account1: 1100.0
//Balance of account2: 495.0
//Name: Alice, Age: 25, Gender: Female 
