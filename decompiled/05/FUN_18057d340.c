// FUN_18057d340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057d340 */

void FUN_18057d340(void)

{
  HANDLE hHeap;
  undefined8 *puVar1;
  
  hHeap = GetProcessHeap();
  if (hHeap != (HANDLE)0x0) {
    puVar1 = HeapAlloc(hHeap,0,0x20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = hHeap;
      puVar1[1] = FUN_18057d570;
      puVar1[3] = FUN_18057d5f0;
      puVar1[2] = FUN_18057d5e0;
      return;
    }
  }
  return;
}



