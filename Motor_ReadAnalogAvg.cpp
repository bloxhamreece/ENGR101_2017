# include < stdio .h > 
# include < time .h > 
# include " E101 .h " 

int main (){ 
init (); 
  int adc_reading;
  int i = 0;
  int total = 0;
  
  while(i<5){
      
      adc_reading = read_analog(0);
      printf("d\n", adc_reading);
      total+= adc_reading;
      i+ = 1;
}
printf("%d mean /n",  total/5);

return 0;
}
