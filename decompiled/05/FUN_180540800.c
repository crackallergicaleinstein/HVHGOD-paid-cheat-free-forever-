// FUN_180540800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180540800 */

void FUN_180540800(void)

{
  ulonglong in_stack_ffffffffffffffc8;
  char *pcVar1;
  ulonglong uVar2;
  
  FUN_180488c60();
  FUN_1805367d0("Sky Color",&DAT_180cc8ed8,&DAT_180830b38,1,
                in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
  pcVar1 = "%.1f EV";
  FUN_18048a250("Exposure",&DAT_180cc8ee4,0xc0400000,0x40400000,"%.1f EV",0x3dcccccd,1,
                &DAT_180830b60);
  FUN_180488f10();
  FUN_180488c60();
  uVar2 = (ulonglong)pcVar1 & 0xffffffffffffff00;
  FUN_1805367d0("Cloud Color",&DAT_180cc8edc,&DAT_180829a44,1,uVar2);
  FUN_1805367d0("Sun Color",&DAT_180cc8ee0,&DAT_180830b60,1,uVar2 & 0xffffffffffffff00);
  FUN_180488f10();
  FUN_1805302b0("Cloud and sun layers depend on the map\'s materials.");
  return;
}



