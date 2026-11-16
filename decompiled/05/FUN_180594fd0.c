// FUN_180594fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180594fd0 */

ulonglong FUN_180594fd0(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                       char param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *(longlong *)(param_3 + 8);
  FUN_18063ab10(param_1,0,0x130);
  if (param_5 == '\0') {
    if ((param_4 & 2) == 0) {
      uVar7 = (int)param_4 >> 0x10 & 0xf;
      bVar8 = uVar7 != 2;
      lVar3 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x90);
      uVar1 = *(uint *)(param_2 + 0x118);
      bVar5 = false;
      if (0 < (int)uVar1) {
        return (ulonglong)uVar1;
      }
      if (((int)uVar1 < 0) &&
         (uVar6 = FUN_180595c40(param_2,CONCAT31((uint3)(param_4 >> 0xf),(char)(param_4 >> 7)) &
                                        0xffffff01), (int)uVar6 != 0)) {
        return uVar6;
      }
      lVar4 = *(longlong *)(param_2 + 0x110);
      *(undefined4 *)(lVar4 + 0x324) = 0;
      if ((*(int *)(lVar3 + 0x70) == 0x28) && (bVar8 = false, uVar7 != *(uint *)(lVar4 + 0x328))) {
        *(uint *)(lVar4 + 0x328) = uVar7;
        bVar5 = true;
      }
      if (bVar8 != (bool)*(char *)(lVar4 + 800)) {
        *(bool *)(lVar4 + 800) = bVar8;
        bVar5 = true;
      }
      uVar1 = *(uint *)(param_2 + 0x11c);
      if (0 < (int)uVar1) {
        return (ulonglong)uVar1;
      }
      if ((((int)uVar1 < 0) || (bVar5)) && (uVar6 = FUN_180596270(param_2), (int)uVar6 != 0)) {
        return uVar6;
      }
      FUN_18058cdb0(lVar4,lVar2,param_2);
      uVar1 = param_4 | 2;
      if ((*(byte *)(param_2 + 0xcd) & 1) == 0) {
        uVar1 = param_4;
      }
      param_4 = uVar1;
      if ((*(byte *)(param_2 + 0xcd) & 2) != 0) {
        *(undefined8 *)(param_2 + 0x88) = 0x1000000000000;
        *(undefined8 *)(param_2 + 0x90) = 0x400000010001;
        *(undefined8 *)(param_2 + 0x98) = 0x400000004000;
        *(undefined1 **)(param_2 + 0xa0) = &DAT_100000001;
        *(undefined8 *)(param_2 + 0xa8) = 0;
        *(undefined8 *)(param_2 + 0xb0) = 0;
        *(undefined8 *)(param_2 + 0xb8) = 0x4400000040;
        *(undefined8 *)(param_2 + 0xc0) = 0;
        *(undefined8 *)(param_2 + 200) = 0x100030009;
        *(undefined4 *)(param_2 + 0xd0) = 0;
      }
      if (((*(int *)(lVar3 + 0x70) == 0x28) && (uVar7 != 2)) &&
         ((*(uint *)(*(longlong *)(param_3 + 8) + 8) & 0x2000) == 0)) {
        *(uint *)(lVar4 + 0x324) = ~(uint)*(byte *)(param_2 + 0xcd) & 4;
      }
      param_1[0x1b] = lVar4;
      if ((((param_4 & 0x200002) == 0) && (*(int *)(lVar4 + 0x324) == 0)) &&
         (*(int *)(lVar2 + 0x27c) == 0)) {
        param_1[0x25] = *(longlong *)(param_2 + 0x78);
      }
      else {
        param_1[0x25] = 0;
      }
    }
    lVar3 = **(longlong **)(param_3 + 0xf0);
    FUN_1805743a0(lVar3);
    param_1[3] = lVar3;
  }
  *(uint *)(param_1 + 4) = param_4;
  *param_1 = lVar2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[5] = *(longlong *)(lVar2 + 0xa0);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return 0;
}



