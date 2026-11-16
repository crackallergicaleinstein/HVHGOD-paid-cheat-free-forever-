// FUN_1805a4da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a4da0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a4da0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char *_Str1;
  char *pcVar10;
  uint uVar11;
  undefined1 auStack_1a8 [32];
  int local_188;
  int *local_180;
  undefined8 local_178;
  char local_168 [9];
  char local_15f [263];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  FUN_18063ab10(param_1,0,0xc0);
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = param_2;
  iVar2 = FUN_1805780f0(param_2);
  local_188 = iVar2;
  iVar3 = FUN_180577bf0(param_2,0x1f);
  if (iVar3 != 0) {
  }
  iVar3 = strncmp(*(char **)(param_2 + 0x38),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
  if (iVar3 != 0) {
    FUN_180577d30(param_2);
  }
  FUN_180577d30(param_2);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    iVar3 = 0;
    pcVar10 = local_168;
    uVar11 = 0;
    uVar8 = 0x109;
    do {
      iVar5 = *(int *)(param_2 + 8);
      iVar4 = FUN_1805780f0(param_2);
      uVar7 = iVar5 - iVar4;
      if (uVar8 < uVar7) {
        uVar7 = uVar8;
      }
      uVar9 = (ulonglong)uVar7;
      if ((uVar7 != 0) && (iVar5 = FUN_180578100(param_2,pcVar10,uVar9), iVar5 != 0)) {
      }
      pcVar10[uVar9] = '\0';
      for (pcVar6 = local_168; pcVar6 < pcVar10 + (uVar9 - 6); pcVar6 = pcVar6 + 1) {
        if ((*pcVar6 == 'S') && (iVar5 = strncmp(pcVar6,"StartData",9), iVar5 == 0)) {
          iVar3 = FUN_1805780f0(param_2);
          iVar3 = iVar3 + 10;
LAB_1805a4f35:
          iVar3 = ((((int)pcVar6 - uVar11) - uVar7) - (int)local_168) + iVar3;
        }
        else if ((pcVar6[1] == 's') && (iVar5 = strncmp(pcVar6,"/sfnts",6), iVar5 == 0)) {
          iVar3 = FUN_1805780f0(param_2);
          iVar3 = iVar3 + 7;
          goto LAB_1805a4f35;
        }
      }
      if (uVar11 + uVar7 < 10) goto LAB_1805a4f8f;
      FUN_18063aed0(local_168,local_168 + uVar11 + uVar9 + -9,9);
      uVar8 = 0x100;
      pcVar10 = local_15f;
      uVar11 = 9;
    } while( true );
  }
  iVar3 = *(int *)(param_2 + 8);
LAB_1805a4f97:
  uVar8 = iVar3 - iVar2;
  iVar2 = FUN_1805788b0(param_2,iVar2);
  if ((iVar2 == 0) && (iVar2 = FUN_180577d80(param_2,uVar8,param_1 + 0x13), iVar2 == 0)) {
    pcVar10 = (char *)param_1[0x13];
    *(int *)((longlong)param_1 + 0xa4) = iVar3;
    param_1[2] = (ulonglong)(pcVar10 + uVar8);
    *(uint *)(param_1 + 0x14) = uVar8;
    param_1[1] = (ulonglong)pcVar10;
    *param_1 = (ulonglong)pcVar10;
    *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
    (*(code *)param_1[8])(param_1);
    (*(code *)param_1[7])(param_1);
    pcVar6 = (char *)*param_1;
    (*(code *)param_1[8])(param_1);
    (*(code *)param_1[7])(param_1);
    uVar9 = param_1[2];
    pcVar1 = (char *)*param_1;
    if ((char *)*param_1 <= (char *)(uVar9 - 6)) {
      while (_Str1 = pcVar1, (int)param_1[3] == 0) {
        if (((*_Str1 == 'S') && (_Str1 <= (char *)(uVar9 - 9))) &&
           (iVar2 = strncmp(_Str1,"StartData",9), iVar2 == 0)) {
          *param_1 = (ulonglong)pcVar10;
          (*(code *)param_1[0xe])(param_1,&local_180);
          if (((local_178 - (longlong)local_180 == 5) && (*local_180 == 0x78654828)) &&
             ((char)local_180[1] == ')')) {
            *param_1 = (ulonglong)pcVar6;
            iVar2 = (*(code *)param_1[9])(param_1);
            if (-1 < iVar2) {
              *(int *)(param_1 + 0x15) = iVar2;
            }
          }
          iVar2 = ((int)_Str1 - (int)param_1[0x13]) + 10;
          if (iVar2 == iVar3) {
          }
          FUN_180578860(param_2,param_1 + 0x13);
          uVar8 = iVar2 - local_188;
          iVar3 = FUN_1805788b0(param_2);
          if (iVar3 != 0) {
          }
          iVar3 = FUN_180577d80(param_2,uVar8,param_1 + 0x13);
          if (iVar3 == 0) {
            uVar9 = param_1[0x13];
            *(int *)((longlong)param_1 + 0xa4) = iVar2;
            param_1[2] = uVar8 + uVar9;
            *(uint *)(param_1 + 0x14) = uVar8;
            param_1[1] = uVar9;
            *param_1 = uVar9;
          }
        }
        if ((_Str1[1] == 's') && (iVar2 = strncmp(_Str1,"/sfnts",6), iVar2 == 0)) {
        }
        (*(code *)param_1[8])(param_1);
        (*(code *)param_1[7])(param_1);
        pcVar1 = (char *)*param_1;
        pcVar10 = pcVar6;
        pcVar6 = _Str1;
        if ((char *)(uVar9 - 6) < (char *)*param_1) {
        }
      }
    }
  }
LAB_1805a4f8f:
  if (iVar3 == 0) {
  }
  goto LAB_1805a4f97;
}



