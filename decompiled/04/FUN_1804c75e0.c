// FUN_1804c75e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c75e0 */

void FUN_1804c75e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  cVar2 = FUN_1804c73e0(2);
  lVar1 = DAT_180bb8ae8;
  if (cVar2 != '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    if (*(char *)(*(longlong *)(lVar1 + 0x14d0) + 0xd1) == '\0') {
      FUN_1804b0940(&local_res20,&local_res18,param_1,param_2);
      FUN_1804f4090(local_res20,local_res18);
    }
    FUN_1804c14e0();
  }
  return;
}



