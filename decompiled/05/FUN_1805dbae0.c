// FUN_1805dbae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dbae0 */

undefined8 FUN_1805dbae0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_res8 [2];
  
  uVar3 = *(ulonglong *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x78) < uVar3) {
LAB_1805dbba5:
    uVar2 = 0;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    uVar4 = (uVar3 >> 1) + 4 + uVar3;
    if (puVar1 == (undefined8 *)(param_1 + 0x88)) {
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      puVar1 = (undefined8 *)0x0;
    }
    if ((uVar4 < 0x10001) || (uVar4 = 0x10000, uVar3 != 0x10000)) {
      puVar1 = (undefined8 *)
               FUN_18057ac40(*(undefined8 *)(param_1 + 0xd0),1,uVar3 & 0xffffffff,uVar4 & 0xffffffff
                             ,puVar1,local_res8);
      *(undefined8 **)(param_1 + 0x70) = puVar1;
      if (local_res8[0] == 0) {
        if (uVar3 == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          *puVar1 = *(undefined8 *)(param_1 + 0x88);
          puVar1[1] = uVar2;
          uVar2 = *(undefined8 *)(param_1 + 0xa0);
          puVar1[2] = *(undefined8 *)(param_1 + 0x98);
          puVar1[3] = uVar2;
          uVar2 = *(undefined8 *)(param_1 + 0xb0);
          puVar1[4] = *(undefined8 *)(param_1 + 0xa8);
          puVar1[5] = uVar2;
          uVar2 = *(undefined8 *)(param_1 + 0xc0);
          puVar1[6] = *(undefined8 *)(param_1 + 0xb8);
          puVar1[7] = uVar2;
        }
        *(ulonglong *)(param_1 + 0x80) = uVar4;
        goto LAB_1805dbba5;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



