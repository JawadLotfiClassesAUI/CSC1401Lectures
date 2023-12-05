float convert1(int f, float i){
  return (f * 30.48 + i * 2.54);
}

void convert2(float cms, int* ptr_feet, float* ptr_inches){
  *ptr_feet = (int)(cms/30.48);
  float diff = cms - (*ptr_feet*30.48);
  *ptr_inches = diff / 2.54;
}