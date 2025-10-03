public class Factory_Pattern{

    public static void Order(String budgetType, String knifeType ){

        Factory k_factory = Factory_Producer.getFactory(budgetType);

        if (k_factory == null) {
            System.out.println("Invalid budget type specified. Cannot create factory.");
            return;
        }

        Knife n1 = k_factory.Create_Knives(knifeType);
        
        if (n1 == null) {
            System.out.println("Invalid knife type specified.");
            return;
        }
        
        n1.Identify();
        n1.Sharpening();
        n1.Packaging();

    }

    public static void main(String[] args) {
        System.out.println("--- Ordering a High Budget Chef Knife ---");
        Order("High", "Chef_Knife");
        
        System.out.println("\n--- Ordering a Low Budget Steak Knife ---");
        Order("Low", "Steak_Knife");
    }
}

class Factory_Producer {
    public static Factory getFactory(String budgetType) {
        if (budgetType.equalsIgnoreCase("High")) {
            return new High_budget_Factory();
        } else if (budgetType.equalsIgnoreCase("Low")) {
            return new Low_budget_Factory();
        } else {
            return null;
        }
    }
}

interface Factory{
    Knife Create_Knives(String type);
}

class Low_budget_Factory implements Factory{
    public Knife Create_Knives(String type){
        if(type.equalsIgnoreCase("Chef_Knife")){
            return new Low_Budget_Chef_Knife();
        }
        else if(type.equalsIgnoreCase("Steak_Knife")){
            return new Low_Budget_Steak_Knife();
        }
        else return null;
    }
}

class High_budget_Factory implements Factory{
    public Knife Create_Knives(String type){
        if(type.equalsIgnoreCase("Chef_Knife")){
            return new High_Budget_Chef_Knife();
        }
        else if(type.equalsIgnoreCase("Steak_Knife")){
            return new High_Budget_Steak_Knife(); 
        }
        else return null;
    }
}

interface Knife{
    void Identify();
    void Sharpening();
    void Packaging();
}
class Low_Budget_Chef_Knife implements Knife{
    public void Identify(){ System.out.println("The knife is identified as LBCK"); }
    public void Sharpening(){ System.out.println("The low budget chef knife is Sharpened "); }
    public void Packaging(){ System.out.println("The low budget chef_knife is packaged"); }
}
class High_Budget_Chef_Knife implements Knife{
    public void Identify(){ System.out.println("The knife is identified as HBCK"); }
    public void Sharpening(){ System.out.println("The High budget chef knife is Sharpened "); }
    public void Packaging(){ System.out.println("The High budget chef_knife is packaged"); }
}
class Low_Budget_Steak_Knife implements Knife{
    public void Identify(){ System.out.println("The knife is identified as LBSK"); }
    public void Sharpening(){ System.out.println("The low budget Steak knife is Sharpened "); }
    public void Packaging(){ System.out.println("The low budget Steak_knife is packaged"); }
}
class High_Budget_Steak_Knife implements Knife{
    public void Identify(){ System.out.println("The knife is identified as HBSK"); }
    public void Sharpening(){ System.out.println("The High budget Steak knife is Sharpened "); }
    public void Packaging(){ System.out.println("The High budget Steak_knife is packaged"); }
}