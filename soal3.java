public class serviceComputer {
  public void main(String[] args) {
    int nomorAkun = 12345; 
    String status = "valid";
    double amountOfSale = 150.0;

        int inputAccount;

        System.out.print("Masukkan account number: ");
        inputAccount = input.nextInt();

        if (inputAccount == nomorAkun && status.equals("valid")) {

            // Postcondition 1
            System.out.println("INVOICE");
            System.out.println("Account Number : " + accountNumber);
            System.out.println("Amount of Sale : $" + amountOfSale);

        } else {
            System.out.println("Error: Account tidak ditemukan atau status tidak valid.");

        }

  }
}
