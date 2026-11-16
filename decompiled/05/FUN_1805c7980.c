// FUN_1805c7980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c7980 */

ulonglong FUN_1805c7980(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  
  if (param_3 == '\0') {
    uVar4 = 0x686d7478;
    lVar2 = 0x4c8;
    lVar5 = 0x430;
  }
  else {
    uVar4 = 0x766d7478;
    lVar2 = 0x4cc;
    lVar5 = 0x434;
  }
  uVar3 = (**(code **)(param_1 + 0x2a0))(param_1,uVar4,param_2,local_res18);
  if ((int)uVar3 == 0) {
    *(undefined4 *)(lVar5 + param_1) = local_res18[0];
    uVar1 = FUN_1805780f0(param_2);
    *(undefined4 *)(lVar2 + param_1) = uVar1;
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



