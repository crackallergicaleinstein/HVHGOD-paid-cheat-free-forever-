// FUN_18060e0d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060e0d0 */

ulonglong FUN_18060e0d0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar1 + 1;
  puVar2 = (ulonglong *)*puVar1;
  uVar4 = FUN_180624260();
  if ((int)uVar4 == 0) goto LAB_18060e0f5;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x20));
          *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x20);
          goto LAB_18060e16e;
        }
        iVar6 = iVar6 + -2;
        if (iVar6 == 0) {
          uVar5 = (ulonglong)*(ushort *)(param_1 + 0x20);
          *(ushort *)puVar2 = *(ushort *)(param_1 + 0x20);
          goto LAB_18060e16e;
        }
        goto LAB_18060e15d;
      }
LAB_18060e17f:
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      *(uint *)puVar2 = *(uint *)(param_1 + 0x20);
      goto LAB_18060e16e;
    }
  }
  else if (((iVar6 != 6) && (iVar6 != 7)) && (iVar6 = iVar6 + -9, iVar6 != 0)) {
LAB_18060e15d:
    if (iVar6 == 1) goto LAB_18060e17f;
    if (iVar6 != 2) {
LAB_18060e0f5:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_18060aa1c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x20);
  *puVar2 = uVar5;
LAB_18060e16e:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



