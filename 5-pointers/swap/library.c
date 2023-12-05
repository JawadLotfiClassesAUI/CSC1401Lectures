void swap(int* ptr_num1, int* ptr_num2){
  int temp = *ptr_num1;
  *ptr_num1 = *ptr_num2;
  *ptr_num2 = temp;
}