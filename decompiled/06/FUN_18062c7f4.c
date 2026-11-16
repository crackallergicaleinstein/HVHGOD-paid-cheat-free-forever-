// FUN_18062c7f4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c7f4 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18062c7f4(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,
                  undefined4 param_4,LPWORD param_5,int param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  LPCWSTR lpSrcStr;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = FUN_18062b5a8(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  if (iVar3 == 0) goto LAB_18062c94a;
  uVar1 = (longlong)iVar3 * 2;
  uVar6 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar6 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
LAB_18062c932:
    puVar9 = puVar8;
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_18062c94a;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      puVar8 = auStack_88 + lVar2;
      puVar7 = auStack_88 + lVar2;
      puVar5 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (LPCWSTR)0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_18062c932;
      *puVar5 = 0xcccc;
LAB_18062c8e0:
      lpSrcStr = (LPCWSTR)(puVar5 + 4);
      puVar8 = puVar7;
    }
    else {
      puVar5 = (undefined4 *)_malloc_base();
      puVar8 = auStack_88;
      puVar7 = auStack_88;
      lpSrcStr = (LPCWSTR)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_18062c8e0;
      }
    }
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_18062c932;
    *(undefined8 *)(puVar8 + -8) = 0x18062c8f6;
    FUN_18063ab10(lpSrcStr,0,uVar1);
    *(int *)(puVar8 + 0x28) = iVar3;
    *(LPCWSTR *)(puVar8 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar8 + -8) = 0x18062c912;
    iVar3 = FUN_18062b5a8(param_6,1,param_3,param_4);
    if (iVar3 == 0) goto LAB_18062c932;
    *(undefined8 *)(puVar8 + -8) = 0x18062c92c;
    GetStringTypeW(param_2,lpSrcStr,iVar3,param_5);
  }
  puVar9 = puVar8;
  if (*(int *)(lpSrcStr + -8) == 0xdddd) {
    *(undefined8 *)(puVar8 + -8) = 0x18062c94a;
    FUN_180621380();
  }
LAB_18062c94a:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined **)(puVar9 + -8) = &UNK_18062c969;
}



