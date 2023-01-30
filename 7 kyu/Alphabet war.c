/*
				DESCRIPTION

Introduction
There is a war and nobody knows - the alphabet war!
There are two groups of hostile letters. The tension between left side letters and right side letters was too high and the war began.

Task
Write a function that accepts fight string consists of only small letters and return who wins the fight.
When the left side wins return Left side wins!, when the right side wins return Right side wins!, in other case return Let's fight again!.

The left side letters and their power:

 w - 4
 p - 3
 b - 2
 s - 1
The right side letters and their power:

 m - 4
 q - 3
 d - 2
 z - 1
The other letters don't have power and are only victims.

Example
AlphabetWar("z");        //=> Right side wins!
AlphabetWar("zdqmwpbs"); //=> Let's fight again!
AlphabetWar("zzzzs");    //=> Right side wins!
AlphabetWar("wwwwwwz");  //=> Left side wins!
*/

int  is_char(char c, char *left, char *right)
{
  int i = 0;
  
  while (i < 4)
  {
    if (c == left[i] || c == right[i])
      return (c == left[i] ? ++i : -i-1);
    i++;
  }
  return (0);
}

char *alphabet_war(const char *fight)
{
    int score = 0;
    int i = -1;
  
    while (fight[++i])
        score += is_char(fight[i], "sbpw", "zdqm");
    if (score == 0)
      return "Let's fight again!";
    return (score > 0 ? "Left side wins!" : "Right side wins!");
}