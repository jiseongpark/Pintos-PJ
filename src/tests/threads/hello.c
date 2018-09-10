/*This test case is for CS330 Project 0 to verify the test programs are fully functioning*/
#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"

void
test_hello (void)
{
  printf("\n\n-----------------< CS330 Project 0 >-----------------\n\n"); //this line is for title and padding
  printf("hello, world!");                                                 //this line is for answer
  printf("\n\n-----------------------------------------------------\n\n"); //this line is for padding
  pass ();
}

