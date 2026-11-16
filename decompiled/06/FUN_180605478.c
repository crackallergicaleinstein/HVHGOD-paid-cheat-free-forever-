// FUN_180605478 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180605478 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180605478(LPCWSTR param_1,uint param_2,char *param_3,int param_4,undefined8 param_5,
                  int param_6,UINT param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  LPCWSTR lpSrcStr;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  LPCWSTR lpWideCharStr;
  undefined1 auStackY_78 [32];
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1808d5f00 ^ (ulonglong)local_28;
  iVar3 = param_4;
  if (0 < param_4) {
    sVar4 = __strncnt(param_3,(longlong)param_4);
    iVar2 = (int)sVar4;
    iVar3 = iVar2 + 1;
    if (param_4 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,iVar3,(LPWSTR)0x0,0);
  puVar9 = auStackY_78;
  if ((iVar2 == 0) ||
     (uVar7 = (longlong)iVar2 * 2 + 0x10,
     uVar7 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar7) & uVar7, puVar9 = auStackY_78,
     uVar7 == 0)) goto LAB_1806055a8;
  if (uVar7 < 0x401) {
    uVar5 = uVar7 + 0xf;
    if (uVar5 <= uVar7) {
      uVar5 = 0xffffffffffffff0;
    }
    lVar1 = -(uVar5 & 0xfffffffffffffff0);
    puVar9 = auStackY_78 + lVar1;
    puVar8 = auStackY_78 + lVar1;
    puVar6 = (undefined4 *)((longlong)local_28 + lVar1);
    if (puVar6 == (undefined4 *)0x0) goto LAB_1806055a8;
    *puVar6 = 0xcccc;
LAB_180605568:
    lpSrcStr = (LPCWSTR)(puVar6 + 4);
    puVar9 = puVar8;
  }
  else {
    puVar6 = (undefined4 *)_malloc_base();
    puVar9 = auStackY_78;
    puVar8 = auStackY_78;
    lpSrcStr = (LPCWSTR)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0xdddd;
      goto LAB_180605568;
    }
  }
  if (lpSrcStr == (LPCWSTR)0x0) goto LAB_1806055a8;
  *(int *)(puVar9 + 0x28) = iVar2;
  *(LPCWSTR *)(puVar9 + 0x20) = lpSrcStr;
  *(undefined8 *)(puVar9 + -8) = 0x18060558f;
  iVar3 = MultiByteToWideChar(param_7,1,param_3,iVar3,*(LPWSTR *)(puVar9 + 0x20),
                              *(int *)(puVar9 + 0x28));
  if (iVar3 != 0) {
    *(undefined8 *)(puVar9 + 0x40) = 0;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined4 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + -8) = 0x1806055f8;
    iVar3 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar9 + 0x20),
                          *(int *)(puVar9 + 0x28),*(LPNLSVERSIONINFO *)(puVar9 + 0x30),
                          *(LPVOID *)(puVar9 + 0x38),*(LPARAM *)(puVar9 + 0x40));
    if (iVar3 != 0) {
      puVar10 = puVar9;
      if ((param_2 & 0x400) == 0) {
        uVar7 = (longlong)iVar3 * 2 + 0x10;
        uVar7 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar7) & uVar7;
        if (uVar7 == 0) goto LAB_180605769;
        if (uVar7 < 0x401) {
          uVar5 = uVar7 + 0xf;
          if (uVar5 <= uVar7) {
            uVar5 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar9 + -8) = 0x18060568a;
          lVar1 = -(uVar5 & 0xfffffffffffffff0);
          puVar10 = puVar9 + lVar1;
          puVar6 = (undefined4 *)(puVar9 + lVar1 + 0x50);
          if (puVar6 == (undefined4 *)0x0) goto LAB_180605769;
          *puVar6 = 0xcccc;
          puVar9 = puVar9 + lVar1;
LAB_1806056b9:
          lpWideCharStr = (LPCWSTR)(puVar6 + 4);
          puVar10 = puVar9;
        }
        else {
          *(undefined8 *)(puVar9 + -8) = 0x1806056ab;
          puVar6 = (undefined4 *)_malloc_base(uVar7);
          lpWideCharStr = (LPCWSTR)0x0;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0xdddd;
            goto LAB_1806056b9;
          }
        }
        if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_180605769;
        *(undefined8 *)(puVar10 + 0x40) = 0;
        *(undefined8 *)(puVar10 + 0x38) = 0;
        *(undefined8 *)(puVar10 + 0x30) = 0;
        *(int *)(puVar10 + 0x28) = iVar3;
        *(LPCWSTR *)(puVar10 + 0x20) = lpWideCharStr;
        *(undefined8 *)(puVar10 + -8) = 0x1806056fc;
        iVar2 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar10 + 0x20),
                              *(int *)(puVar10 + 0x28),*(LPNLSVERSIONINFO *)(puVar10 + 0x30),
                              *(LPVOID *)(puVar10 + 0x38),*(LPARAM *)(puVar10 + 0x40));
        if (iVar2 != 0) {
          *(undefined8 *)(puVar10 + 0x38) = 0;
          *(undefined8 *)(puVar10 + 0x30) = 0;
          if (param_6 == 0) {
            *(undefined4 *)(puVar10 + 0x28) = 0;
            *(undefined8 *)(puVar10 + 0x20) = 0;
          }
          else {
            *(int *)(puVar10 + 0x28) = param_6;
            *(undefined8 *)(puVar10 + 0x20) = param_5;
          }
          *(undefined8 *)(puVar10 + -8) = 0x180605756;
          WideCharToMultiByte(param_7,0,lpWideCharStr,iVar3,*(LPSTR *)(puVar10 + 0x20),
                              *(int *)(puVar10 + 0x28),*(LPCSTR *)(puVar10 + 0x30),
                              *(LPBOOL *)(puVar10 + 0x38));
          if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
            *(undefined8 *)(puVar10 + -8) = 0x180605769;
            thunk_FUN_180621380();
          }
          goto LAB_180605769;
        }
        if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
          *(undefined8 *)(puVar10 + -8) = 0x180605714;
          thunk_FUN_180621380();
        }
        iVar3 = *(int *)(lpSrcStr + -8);
      }
      else {
        if ((param_6 != 0) && (iVar3 <= param_6)) {
          *(undefined8 *)(puVar9 + 0x40) = 0;
          *(undefined8 *)(puVar9 + 0x38) = 0;
          *(undefined8 *)(puVar9 + 0x30) = 0;
          *(int *)(puVar9 + 0x28) = param_6;
          *(undefined8 *)(puVar9 + 0x20) = param_5;
          *(undefined8 *)(puVar9 + -8) = 0x18060564b;
          LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar9 + 0x20),
                        *(int *)(puVar9 + 0x28),*(LPNLSVERSIONINFO *)(puVar9 + 0x30),
                        *(LPVOID *)(puVar9 + 0x38),*(LPARAM *)(puVar9 + 0x40));
        }
LAB_180605769:
        iVar3 = *(int *)(lpSrcStr + -8);
      }
      puVar9 = puVar10;
      if (iVar3 == 0xdddd) {
        *(undefined8 *)(puVar10 + -8) = 0x18060577a;
        thunk_FUN_180621380();
      }
      goto LAB_1806055a8;
    }
  }
  if (*(int *)(lpSrcStr + -8) == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x1806055a6;
    thunk_FUN_180621380();
  }
LAB_1806055a8:
  *(undefined **)(puVar9 + -8) = &UNK_1806055b4;
}



