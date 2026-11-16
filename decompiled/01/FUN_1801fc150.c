// FUN_1801fc150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fc150 */

undefined8 FUN_1801fc150(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ULONGLONG UVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_1801fc770(param_1,param_2,&DAT_180c70ee0);
  iVar1 = DAT_180c634dc;
  if ((char)uVar2 != '\0') {
    uVar5 = 0xffffffffffffffff;
    if ((DAT_180c634dc == 0) && (UVar3 = GetTickCount64(), DAT_180c634e0 <= UVar3)) {
      iVar1 = FUN_1805f68d0(&DAT_1808e8230);
      if (iVar1 != 0) goto LAB_1801fc761;
      if (DAT_1808e827c == 0x7fffffff) {
        DAT_1808e827c = 0x7ffffffe;
        goto LAB_1801fc756;
      }
      if ((DAT_180c634dc == 0) && (DAT_180c634e0 <= UVar3)) {
        DAT_180c634dc = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180c634dc == 0) {
          DAT_180c634e0 = UVar3 + 1000;
        }
        else {
          DAT_180c634e0 = 0xffffffffffffffff;
        }
      }
      iVar1 = DAT_180c634dc;
      FUN_1805f68fc(&DAT_1808e8230);
    }
    iVar4 = DAT_180c634d8;
    DAT_180c70ec0 = *(undefined2 *)(iVar1 + param_2);
    if ((DAT_180c634d8 == 0) && (UVar3 = GetTickCount64(), DAT_180c634d0 <= UVar3)) {
      iVar1 = FUN_1805f68d0(&DAT_1808e81e0);
      if (iVar1 != 0) goto LAB_1801fc761;
      if (DAT_1808e822c == 0x7fffffff) {
        DAT_1808e822c = 0x7ffffffe;
        goto LAB_1801fc756;
      }
      if ((DAT_180c634d8 == 0) && (DAT_180c634d0 <= UVar3)) {
        DAT_180c634d8 = FUN_1804174b0("C_EconItemView",0x34b55816);
        if (DAT_180c634d8 == 0) {
          DAT_180c634d0 = UVar3 + 1000;
        }
        else {
          DAT_180c634d0 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c634d8;
      FUN_1805f68fc(&DAT_1808e81e0);
    }
    iVar1 = DAT_180c634c4;
    DAT_180c70ec8 = *(undefined8 *)(iVar4 + param_2);
    if ((DAT_180c634c4 == 0) && (UVar3 = GetTickCount64(), DAT_180c634c8 <= UVar3)) {
      iVar1 = FUN_1805f68d0(&DAT_1808e8190);
      if (iVar1 != 0) goto LAB_1801fc761;
      if (DAT_1808e81dc == 0x7fffffff) {
        DAT_1808e81dc = 0x7ffffffe;
        goto LAB_1801fc756;
      }
      if ((DAT_180c634c4 == 0) && (DAT_180c634c8 <= UVar3)) {
        DAT_180c634c4 = FUN_1804174b0("C_EconItemView",0x373ee446);
        if (DAT_180c634c4 == 0) {
          DAT_180c634c8 = UVar3 + 1000;
        }
        else {
          DAT_180c634c8 = 0xffffffffffffffff;
        }
      }
      iVar1 = DAT_180c634c4;
      FUN_1805f68fc(&DAT_1808e8190);
    }
    iVar4 = DAT_180c634c0;
    DAT_180c70ed0 = *(undefined4 *)(iVar1 + param_2);
    if ((DAT_180c634c0 == 0) && (UVar3 = GetTickCount64(), DAT_180c634b8 <= UVar3)) {
      iVar1 = FUN_1805f68d0(&DAT_1808e8140);
      if (iVar1 != 0) goto LAB_1801fc761;
      if (DAT_1808e818c == 0x7fffffff) {
        DAT_1808e818c = 0x7ffffffe;
        goto LAB_1801fc756;
      }
      if ((DAT_180c634c0 == 0) && (DAT_180c634b8 <= UVar3)) {
        DAT_180c634c0 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
        if (DAT_180c634c0 == 0) {
          DAT_180c634b8 = UVar3 + 1000;
        }
        else {
          DAT_180c634b8 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c634c0;
      FUN_1805f68fc(&DAT_1808e8140);
    }
    iVar1 = DAT_180c634ac;
    DAT_180c70ed4 = *(undefined4 *)(iVar4 + param_2);
    if ((DAT_180c634ac == 0) && (UVar3 = GetTickCount64(), DAT_180c634b0 <= UVar3)) {
      iVar1 = FUN_1805f68d0(&DAT_1808e80f0);
      if (iVar1 != 0) goto LAB_1801fc761;
      if (DAT_1808e813c == 0x7fffffff) {
        DAT_1808e813c = 0x7ffffffe;
        goto LAB_1801fc756;
      }
      if ((DAT_180c634ac == 0) && (DAT_180c634b0 <= UVar3)) {
        DAT_180c634ac = FUN_1804174b0("C_EconItemView",0xc65de986);
        if (DAT_180c634ac == 0) {
          DAT_180c634b0 = UVar3 + 1000;
        }
        else {
          DAT_180c634b0 = 0xffffffffffffffff;
        }
      }
      iVar1 = DAT_180c634ac;
      FUN_1805f68fc(&DAT_1808e80f0);
    }
    iVar4 = DAT_180c634a8;
    DAT_180c70ed8 = *(undefined4 *)(iVar1 + param_2);
    if ((DAT_180c634a8 == 0) && (UVar3 = GetTickCount64(), DAT_180c634a0 <= UVar3)) {
      iVar1 = FUN_1805f68d0(&DAT_1808e80a0);
      if (iVar1 != 0) goto LAB_1801fc761;
      if (DAT_1808e80ec == 0x7fffffff) {
        DAT_1808e80ec = 0x7ffffffe;
        goto LAB_1801fc756;
      }
      if ((DAT_180c634a8 == 0) && (DAT_180c634a0 <= UVar3)) {
        DAT_180c634a8 = FUN_1804174b0("C_EconItemView",0x33e8ae5a);
        if (DAT_180c634a8 == 0) {
          DAT_180c634a0 = UVar3 + 1000;
        }
        else {
          DAT_180c634a0 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c634a8;
      FUN_1805f68fc(&DAT_1808e80a0);
    }
    iVar1 = DAT_180c63494;
    DAT_180c70edc = *(undefined1 *)(iVar4 + param_2);
    if ((DAT_180c63494 == 0) && (UVar3 = GetTickCount64(), DAT_180c63498 <= UVar3)) {
      iVar1 = FUN_1805f68d0(&DAT_1808e8050);
      if (iVar1 != 0) goto LAB_1801fc761;
      if (DAT_1808e809c == 0x7fffffff) {
        DAT_1808e809c = 0x7ffffffe;
        goto LAB_1801fc756;
      }
      if ((DAT_180c63494 == 0) && (DAT_180c63498 <= UVar3)) {
        DAT_180c63494 = FUN_1804174b0("C_EconItemView",0x710abdd);
        if (DAT_180c63494 == 0) {
          DAT_180c63498 = UVar3 + 1000;
        }
        else {
          DAT_180c63498 = 0xffffffffffffffff;
        }
      }
      iVar1 = DAT_180c63494;
      FUN_1805f68fc(&DAT_1808e8050);
    }
    iVar4 = DAT_180c63490;
    DAT_180c70edd = *(undefined1 *)(iVar1 + param_2);
    if ((DAT_180c63490 == 0) && (UVar3 = GetTickCount64(), DAT_180c63488 <= UVar3)) {
      iVar1 = FUN_1805f68d0(&DAT_1808e8000);
      if (iVar1 != 0) {
LAB_1801fc761:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e804c == 0x7fffffff) {
        DAT_1808e804c = 0x7ffffffe;
LAB_1801fc756:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c63490 == 0) && (DAT_180c63488 <= UVar3)) {
        DAT_180c63490 = FUN_1804174b0("C_EconItemView",0x216db5e3);
        if (DAT_180c63490 == 0) {
          uVar5 = UVar3 + 1000;
        }
        DAT_180c63488 = uVar5;
      }
      iVar4 = DAT_180c63490;
      FUN_1805f68fc(&DAT_1808e8000);
    }
    DAT_180c70ede = *(undefined1 *)(iVar4 + param_2);
    DAT_180c70edf = 1;
    uVar2 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),1);
  }
  return uVar2;
}



