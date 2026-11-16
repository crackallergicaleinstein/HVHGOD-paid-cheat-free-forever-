// FUN_1804ff6d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ff6d0 */

void FUN_1804ff6d0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar3 = DAT_180bb8ae8;
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  FUN_1804c66c0(0);
  *(int *)(lVar1 + 0x1a0) = *(int *)(lVar1 + 0x1a0) + -1;
  uVar5 = 1 << (*(uint *)(lVar1 + 0x1a0) & 0x1f);
  if (0x1f < *(uint *)(lVar1 + 0x1a0)) {
    uVar5 = 0;
  }
  if ((*(uint *)(lVar1 + 0x1a4) & uVar5) != 0) {
    lVar6 = *(longlong *)(lVar3 + 0x2020) + (longlong)*(int *)(lVar3 + 0x2018) * 0x28;
    if ((((((*(uint *)(*(longlong *)(lVar3 + 0x2020) + -0x24 +
                      (longlong)*(int *)(lVar3 + 0x2018) * 0x28) & 0x20000) != 0) &&
          (*(char *)(lVar3 + 0x203b) != '\0')) && (*(int *)(lVar3 + 0x20f0) == 0)) &&
        ((*(longlong *)(lVar3 + 0x2040) == lVar1 && (*(char *)(lVar3 + 0x20e1) != '\0')))) &&
       ((*(int *)(lVar3 + 0x2130) == 0 && (*(int *)(lVar3 + 0x21a0) == 0)))) {
      *(undefined1 *)(lVar3 + 0x20e1) = 0;
      *(undefined4 *)(lVar3 + 0x1ec0) = *(undefined4 *)(lVar6 + -0x28);
      *(uint *)(lVar3 + 0x1ec4) = *(uint *)(lVar6 + -0x20) & 0xffdfffff;
      uVar2 = *(undefined8 *)(lVar6 + -0x14);
      *(undefined8 *)(lVar3 + 0x1edc) = *(undefined8 *)(lVar6 + -0x1c);
      *(undefined8 *)(lVar3 + 0x1ee4) = uVar2;
      FUN_1804c95a0(lVar3 + 0x2128);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x2040) + 0x3f0) + 0x434 +
       (longlong)*(int *)(lVar3 + 0x204c) * 8) = 0x7f7fffff;
      if ((*(char *)(lVar3 + 0x20e1) == '\0') && (*(char *)(lVar3 + 0x20a2) == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(lVar3 + 0x20a1) = uVar4;
    }
    if ((*(float *)(lVar6 + -0xc) != 3.4028235e+38) &&
       (*(float *)(lVar1 + 0x26c) <= *(float *)(lVar1 + 0x11c))) {
      FUN_1804ff3a0(lVar6 + -0x28);
    }
    *(int *)(lVar3 + 0x2018) = *(int *)(lVar3 + 0x2018) + -1;
    *(uint *)(lVar1 + 0x1a4) = *(uint *)(lVar1 + 0x1a4) & ~uVar5;
    *(uint *)(lVar1 + 0x1a8) = *(uint *)(lVar1 + 0x1a8) & ~uVar5;
  }
  FUN_1804c29a0();
  return;
}



