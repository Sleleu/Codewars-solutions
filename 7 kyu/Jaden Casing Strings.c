/*
				DESCRIPTION

Jaden Smith, the son of Will Smith, is the star of films such as The Karate Kid (2010) and After Earth (2013). Jaden is also known for some of his philosophy that he delivers via Twitter. When writing on Twitter, he is known for almost always capitalizing every word. For simplicity, you'll have to capitalize each word, check out how contractions are expected to be in the example below.

Your task is to convert strings to how they would be written by Jaden Smith.
The strings are actual quotes from Jaden Smith, but they are not capitalized in the same way he originally typed them.

Example:

Not Jaden-Cased: "How can mirrors be real if our eyes aren't real"
Jaden-Cased:     "How Can Mirrors Be Real If Our Eyes Aren't Real"

Link to Jaden's former Twitter account @officialjaden via archive.org
*/

char *to_jaden_case (char *jaden_case, const char *string, int i) {
  for (i = -1 ;string[++i];)
      jaden_case[i] = ((string[i - 1] == 32 || !i) && string[i] > 96 && string[i] < 123) ? string[i] - 32 : string[i];
	return (jaden_case[i] = '\0', jaden_case);
}