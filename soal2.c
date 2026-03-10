if (computerAmount == 1 || computerAmount == 2){
  baseFee = 50;
  additionalFee = 0;
}
else if (computerAmount >= 3 && computerAmount <= 10){
  baseFee = 100;
  additionalFee = 10 * peripheral;
}
else if(computerAmount > 10){
  baseFee = 500;
  additionalFee = 10 * peripheral;
}

if (outsideHours == 1) {
  baseFee = baseFee * 2;
}

if (dropOff == 1) {
  baseFee = baseFee / 2;
}

total = baseFee + additionalFee;

prinln("Total biaya servis:", total);

return 0;
