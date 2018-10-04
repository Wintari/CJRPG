void doMemoryFree(char **pointerOnArray,int sizeOfArray){
     for (int i=0; i<sizeOfArray; i++)
      delete [] pointerOnArray[i];
    delete [] pointerOnArray;
}
