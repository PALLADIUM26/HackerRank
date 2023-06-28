//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int i;
  int sumB = 0;
  int sumG = 0;
  for(i=0; i<number_of_students; i++){
      if(i%2 == 0){
        sumB += marks[i];
      }
      else {
        sumG += marks[i];
      }
  }
  if(gender == 'b')
    return sumB;
  else
    return sumG;
}


