// FUN_18032b410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032b410 */

ulonglong FUN_18032b410(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  
  lVar1 = *param_1;
  lVar4 = (longlong)param_2;
  pcVar5 = (char *)param_1[1];
  if (((pcVar5[0x6c] != '\0') && (*(char *)(lVar1 + 4 + lVar4 * 0x14) != '\0')) ||
     ((0x14 < param_2 && (pcVar5 = (char *)param_1[2], *pcVar5 == '\0')))) {
    return (ulonglong)pcVar5 & 0xffffffffffffff00;
  }
  *param_5 = 0;
  iVar3 = *(int *)(lVar1 + 8 + lVar4 * 0x14);
  if (iVar3 == 0) {
    uVar8 = *(undefined4 *)(*(longlong *)param_1[10] + 100);
  }
  else {
    uVar8 = 0xffffffff;
  }
  lVar2 = param_1[1];
  if (iVar3 == 0) {
    uVar7 = *(undefined4 *)(*(longlong *)param_1[8] + 0x68);
  }
  else {
    uVar7 = 100000;
    if (iVar3 == 1) {
      uVar7 = 0;
    }
  }
  iVar3 = *(int *)param_1[7] + 0x28;
  if (0x40 < iVar3) {
    iVar3 = 0x40;
  }
  if ((*(char *)(lVar1 + 4 + lVar4 * 0x14) == '\0') || (*(char *)(lVar2 + 0x6c) != '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  uVar6 = FUN_18031e430(*(undefined8 *)param_1[3],*(undefined8 *)param_1[4],param_1[5],
                        *(undefined8 *)param_1[6],
                        *(float *)(lVar2 + 0x94) + *(float *)(lVar1 + lVar4 * 0x14),uVar9,1,iVar3,
                        param_3,param_4,0x3c800000,uVar7,*(undefined4 *)(lVar2 + 0x80),0,param_5,0,
                        *(undefined1 *)(lVar1 + 0xc + lVar4 * 0x14),param_1[9],
                        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x14),uVar8);
  return uVar6;
}



