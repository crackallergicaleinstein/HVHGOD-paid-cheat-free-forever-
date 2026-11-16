// FUN_180026a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180026a30 */

ulonglong FUN_180026a30(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar5 = param_2[1];
  if (lVar5 - 0x65U < 0xffffffffffffffa7) {
LAB_180026a57:
    uVar4 = 0;
  }
  else {
    lVar1 = *param_2;
    lVar7 = 0;
    do {
      iVar3 = isspace((uint)*(byte *)(lVar1 + lVar7));
      if (iVar3 != 0) goto LAB_180026a57;
      lVar7 = lVar7 + 1;
    } while (lVar5 != lVar7);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    cVar2 = FUN_180010a30(&local_78,&local_58,0x20000001);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      local_68 = *param_1;
      uStack_64 = param_1[1];
      uStack_60 = param_1[2];
      uStack_5c = param_1[3];
      uVar4 = FUN_18001edd0(&local_68,&local_58);
    }
    if (local_58 != 0) {
      uVar6 = local_48 - local_58;
      if (uVar6 < 0x1000) {
        lVar5 = local_58;
      }
      else {
        if (0x1f < (ulonglong)((local_58 + -8) - *(longlong *)(local_58 + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar6 = uVar6 + 0x27;
        lVar5 = *(longlong *)(local_58 + -8);
      }
      uVar4 = uVar4 & 0xffffffff;
      FUN_1804547d0(lVar5,uVar6);
    }
  }
  return uVar4;
}



