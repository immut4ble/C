#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int
main (void)
{
  DIR *reg;
  DIR *tr;
  DIR *dfx;
  struct dirent *ep;

  // Clearing the console.
  int system(const char *command);
  system("cls");

  tr = opendir ("D:\\SVN\\OnlineTransactions");
  puts("*-- Online Transactions --*");
  if (tr != NULL)
    {
      while (ep = readdir (tr))
        puts (ep->d_name);
      (void) closedir (tr);
    }
  else
    perror ("Couldn't open the directory");

  puts("\n");
  reg = opendir ("D:\\SVN\\OnlineRegistration");
  puts("*-- Online Registration --*");
  if (reg != NULL)
    {
      while (ep = readdir (reg))
        puts (ep->d_name);
      (void) closedir (reg);
    }
  else
    perror ("Couldn't open the directory");

  puts("\n");
  dfx = opendir ("D:\\SVN\\DFX");
  puts("*---------- DFX ----------*");
  if (dfx != NULL)
    {
      while (ep = readdir (dfx))
        puts (ep->d_name);
      (void) closedir (dfx);
    }
  else
    perror ("Couldn't open the directory");

  puts("\n");
  puts("\n");
  return 0;
}
