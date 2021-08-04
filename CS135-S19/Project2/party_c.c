// Name: party.c
// Purpose: Asks Jerry to enter information, about eggs, bacon, and bread, and then prints out messages according to that input.
// Date Last Modified: 2/12/19
// Author: Crystal Atoz

#include <stdio.h>

int main(void)
{
  int eggs, bacon, bread, price_per_carton, price_per_pound, price_per_loaf, budget;
  int eggs_cost, bacon_cost, bread_cost;

  printf("Enter the number of cartons of eggs and price per carton: ");
  scanf("%d %d", &eggs, &price_per_carton);

  printf("Enter the number of bacon and price per pound: ");
  scanf("%d %d", &bacon, &price_per_pound);

  printf("Enter the number of loaves of bread and price per loaf: ");
  scanf("%d %d", &bread, &price_per_loaf);

  printf("Enter Jerry's budget: ");
  scanf("%d", &budget);

  // Finds the cost of eggs, bacon, and bread using the user's input
  eggs_cost = eggs * price_per_carton;
  bacon_cost = bacon * price_per_pound;
  bread_cost = bread * price_per_loaf;

//Condition 1 checks if Jerry has money
  if (budget > 0){
    printf("(1) Jerry has some money to buy breakfast supplies.\n");
  }
  else {
    printf("(1) Jerry does not have money to buy anything.\n");
  }
// Condition 2 checks the maximum number of supplies that Jerry can buy
  if (budget >= (eggs_cost + bacon_cost + bread_cost)) {
    printf("(2) Jerry can buy all the supplies for his party.\n");
  }
  else if (budget >= eggs_cost + bacon_cost && budget <= bread_cost) {
    printf("(2) Jerry can only buy eggs and bacon for his party.\n");
  }
  else if (budget >= eggs_cost + bread_cost && budget <= bacon_cost) {
    printf("(2) Jerry can only buy eggs and bread for his party.\n");
  }
  else if (budget >= bacon_cost + bread_cost && budget <= eggs_cost) {
    printf("(2) Jerry can only buy bacon and bread for his party.\n");
  }
  else if (budget >= eggs_cost && budget <= bacon_cost + bread_cost) {
    printf("(2) Jerry can only buy eggs for his party.\n");
  }
  else if (budget >= bacon_cost && budget <= eggs_cost + bread_cost) {
    printf("(2) Jerry can only buy bacon for his party.\n");
  }
  else if (budget >= bread_cost && eggs_cost + bread_cost) {
    printf("(2) Jerry cann only buy bread for his party.\n");
  }
  else {
    printf("(2) Jerry is going to have a very sad party.\n");
  }
// Condition 3 checks the total cost of only one of the breakfast supplies is cheaper than or equal to Jerry's budget
  if (eggs_cost <= budget && bacon_cost >= budget && bread_cost >= budget) {
    printf("(3) Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
  }
  else if (eggs_cost >= budget && bacon_cost <= budget && bread_cost >= budget) {
    printf("(3) Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
  }
  else if (eggs_cost >= budget && bacon_cost >= budget && bread_cost <= budget) {
    printf("(3) Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
  }
  else {
    printf("(3) More than one of the breakfast supplies is cheaper than or equal to Jerry's budget or they are all more expensive.\n");
  }
// Condition 4 checks if at least breakfast supplies are more expensive than Jerry's budget
  if (eggs_cost >= budget && bacon_cost <= budget && bread_cost <= budget) {
    printf("(4) At least two breakfast supplies are more expensive than Jerry's budget.\n");
  }
  else if (eggs_cost >= budget && bacon_cost <= budget && bread_cost <= budget) {
    printf("(4) At least two breakfast supplies are more expensive than Jerry's budget.\n");
  }
  else if (eggs_cost >= budget && bacon_cost <= budget && bread_cost <= budget) {
    printf("(4) At least two breakfast supplies are more expensive than Jerry's budget.\n");
  }
  else {
    printf("(4) At least two breakfast supplies are cheaper than or equal to Jerry's budget.\n");
  }
  // Condition 5 checks if all the breakfast supplies cost the same, only two supplies cost the same, or no supplies cost the same
  if (eggs_cost == bacon_cost && eggs_cost == bread_cost && bacon_cost == bread_cost) {
    printf("(5) All the supplies cost the same.\n");
  }
  else if (eggs_cost == bacon_cost && eggs_cost != bread_cost && bacon_cost != bread_cost) {
    printf("(5) Only two breakfast supplies cost the same.\n");
  }
  else if (eggs_cost != bacon_cost && eggs_cost == bread_cost && bacon_cost != bread_cost) {
    printf("(5) Only two breakfast supplies cost the same.\n");
  }
  else if (eggs_cost != bacon_cost && eggs_cost != bread_cost && bacon_cost == bread_cost) {
    printf("(5) Only two breakfast supplies cost the same.\n");
  }
  else {
    printf("(5) No supplies have the same total price.\n");
  }
  // Condition 6 checks if Jerry has enough money to buy any one of the three supplies
  if (budget >= eggs_cost && budget >= bacon_cost && budget >= bread_cost) {
    printf("(6) Jerry has enough money to buy any one of the three supplies.\n");
  }
  else {
    printf("(6) Jerry does not have enough money to buy any one of the three supplies.\n");
  }
  // Condition 7 checks if Jerry does not have money to buy any of the breakfast supplies
  if (budget <= eggs_cost && budget <= bacon_cost && budget <= bread_cost) {
    printf("(7) Jerry does not have enough money to buy any of the breakfast supplies.\n");
  }
  else {
    printf("(7) Jerry can buy at least one of the breakfast supplies.\n");
  }

  return 0;
}
