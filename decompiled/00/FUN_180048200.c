// FUN_180048200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180048200 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180048200(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  pcVar3 = (char *)*param_1;
  if ((((pcVar3 == (char *)param_1[1]) || (*pcVar3 != '0')) ||
      (uVar9 = param_1[1] - (longlong)pcVar3, uVar9 < 2)) ||
     (uVar10 = (ulonglong)pcVar3[1], (longlong)uVar10 < 0)) goto LAB_180048434;
  uVar7 = 0;
  if ((uVar9 - 2 < uVar10) || (uVar10 + 2 != uVar9)) goto LAB_180048436;
  lVar4 = *param_2;
  lVar11 = param_2[1];
  uVar9 = lVar11 - lVar4;
  if (uVar9 < 0x41) {
    if (uVar9 != 0x40) {
      if ((ulonglong)(param_2[2] - lVar4) < 0x40) {
        FUN_180211c30(param_2,0x40,&local_21);
      }
      else {
        FUN_18063ab10(lVar11,0);
        param_2[1] = lVar11 + (0x40 - uVar9);
      }
    }
  }
  else {
    param_2[1] = lVar4 + 0x40;
  }
  lVar4 = *param_1;
  uVar9 = param_1[1] - lVar4;
  uVar7 = 0;
  if (((uVar9 < 3) || (uVar9 == 3)) || (*(char *)(lVar4 + 2) != '\x02')) goto LAB_180048436;
  cVar2 = *(char *)(lVar4 + 3);
  uVar10 = (ulonglong)cVar2;
  uVar7 = 0;
  if ((((longlong)uVar10 < 0) || (cVar2 == '\0')) || (uVar9 - 4 < uVar10)) goto LAB_180048436;
  if (*(char *)(lVar4 + 4) < '\0') goto LAB_180048434;
  puVar5 = (undefined8 *)*param_2;
  lVar11 = 4;
  if (*(char *)(lVar4 + 4) == '\0') {
    if ((cVar2 == '\x01') || (-1 < *(char *)(lVar4 + 5))) goto LAB_180048434;
    uVar10 = uVar10 - 1;
    lVar11 = 5;
    uVar8 = (int)cVar2 - 0x22;
  }
  else {
    uVar8 = (int)cVar2 - 0x21;
  }
  uVar7 = 0;
  if (uVar8 < 0xffffffe0) goto LAB_180048436;
  uVar7 = 0;
  uVar1 = uVar10 + lVar11;
  if (uVar9 < uVar1) goto LAB_180048436;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  FUN_18063aed0((longlong)puVar5 + (0x20 - uVar10),lVar11 + *param_1);
  lVar4 = *param_1;
  uVar9 = param_1[1] - lVar4;
  if ((uVar1 < uVar9) && (uVar1 + 1 < uVar9 && *(char *)(lVar4 + uVar1) == '\x02')) {
    cVar2 = *(char *)(lVar4 + 1 + uVar1);
    uVar10 = (ulonglong)cVar2;
    uVar7 = 0;
    if (((longlong)uVar10 < 0) || ((cVar2 == '\0' || (((param_1[1] - uVar1) - lVar4) - 2 < uVar10)))
       ) goto LAB_180048436;
    lVar6 = *param_2;
    lVar11 = uVar1 + 2;
    if (-1 < *(char *)(lVar4 + lVar11)) {
      if (*(char *)(lVar4 + lVar11) == '\0') {
        if ((cVar2 == '\x01') || (-1 < *(char *)(lVar4 + 3 + uVar1))) goto LAB_180048434;
        lVar11 = uVar1 + 3;
        uVar10 = uVar10 - 1;
        uVar8 = (int)cVar2 - 0x22;
      }
      else {
        uVar8 = (int)cVar2 - 0x21;
      }
      uVar7 = 0;
      if (0xffffffdf < uVar8) {
        uVar7 = 0;
        if (uVar10 + lVar11 <= uVar9) {
          *(undefined8 *)(lVar6 + 0x30) = 0;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          FUN_18063aed0(lVar6 + 0x20 + (0x20 - uVar10),lVar11 + *param_1);
          uVar7 = CONCAT71((int7)((ulonglong)(param_1[1] - *param_1) >> 8),
                           uVar10 + lVar11 == param_1[1] - *param_1);
        }
      }
      goto LAB_180048436;
    }
  }
LAB_180048434:
  uVar7 = 0;
LAB_180048436:
  if (DAT_1808d5f00 != (local_20 ^ (ulonglong)auStack_48)) {
  }
  return uVar7;
}



