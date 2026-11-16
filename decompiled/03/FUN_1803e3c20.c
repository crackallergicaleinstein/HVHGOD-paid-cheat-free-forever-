// FUN_1803e3c20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e3c20 */

undefined8 FUN_1803e3c20(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  iVar2 = FUN_1805f68d0(&DAT_180903160);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809031ac == 0x7fffffff) {
    DAT_1809031ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_68 = (undefined1  [16])0x0;
  local_58 = 0;
  local_50 = 0;
  FUN_180159e60(local_68,L"Materials",9);
  uVar3 = FUN_18017ec20(local_28);
  FUN_1800a7e60(local_48,uVar3,local_68);
  FUN_18015b930(local_28);
  FUN_18015b930(local_68);
  DAT_180c70eb8 = FUN_1803e3470(local_48);
  FUN_18015b930(local_48);
  if (DAT_180c70eb8 != '\0') {
    cVar1 = FUN_1803884a0();
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_1803e3cf2;
    }
  }
  uVar3 = 0;
LAB_1803e3cf2:
  FUN_1805f68fc(&DAT_180903160);
  return uVar3;
}



