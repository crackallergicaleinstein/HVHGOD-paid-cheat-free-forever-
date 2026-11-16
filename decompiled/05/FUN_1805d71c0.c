// FUN_1805d71c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d71c0 */

int FUN_1805d71c0(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  int local_res18 [2];
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = *(undefined4 *)(param_1 + 0x90);
  uVar4 = *(undefined4 *)(param_1 + 0x94);
  uVar9 = *(undefined4 *)(param_1 + 0x98);
  uVar3 = **(undefined8 **)(param_1 + 8);
  if (param_3 != 0) {
    return 0x84;
  }
  if (*(char *)(param_1 + 0x79) == '\0') {
    return 0x9e;
  }
  cVar5 = *(char *)(param_1 + 0x78);
  lVar2 = param_1 + 0xa0;
  if (cVar5 == '\0') {
    local_res18[0] = (**(code **)(param_1 + 0x80))(lVar2);
    cVar5 = '\x01';
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  pcVar7 = *(code **)(param_1 + 0x98);
  if (*(char *)(param_1 + 0x79) != '\0') {
    if (cVar5 == '\0') {
      (**(code **)(param_1 + 0x80))(lVar2);
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    (*pcVar7)(param_2,1,lVar2);
  }
  uVar6 = FUN_18057ad10(uVar3,*(undefined4 *)(param_2 + 0x70),0,*(undefined4 *)(param_2 + 0x68),0,
                        local_res18,uVar6,pcVar7,uVar8,uVar9);
  *(undefined8 *)(param_2 + 0x78) = uVar6;
  if (local_res18[0] == 0) {
    local_res18[0] = (*(code *)CONCAT44(uVar4,uVar8))(param_2,lVar2);
    if (local_res18[0] == 0) {
      puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
    }
    else {
      FUN_18057abd0(uVar3,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
  }
  return local_res18[0];
}



