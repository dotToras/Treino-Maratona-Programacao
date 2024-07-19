#include <stdio.h>

int health,damage;
int combat(int health, int damage);

int main()
{

scanf("%d", &health);
scanf("%d", &damage);

printf("%d\n", combat(health,damage));

return 0;
}

int combat(int health, int damage)
{

  health = health - damage;

  if(health>0)
     return health;
  else
     return 0;
  
}