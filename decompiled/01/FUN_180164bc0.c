// FUN_180164bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180164bc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180164bc0(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStackY_78 [32];
  longlong local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStackY_78;
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    if (*(char *)((uVar3 - 1) + *param_1) == '\n') {
      uVar3 = uVar3 - 1;
      param_1[1] = uVar3;
    }
    if ((uVar3 != 0) && (*(char *)((uVar3 - 1) + *param_1) == '\r')) {
      uVar3 = uVar3 - 1;
      param_1[1] = uVar3;
    }
  }
  if (uVar3 < 0x18001) {
    local_28 = (undefined1  [16])0x0;
    local_18 = 0;
    local_38 = *param_1;
    lStack_30 = param_1[1];
    FUN_180164970(local_28,&local_38);
    uVar1 = local_28._0_8_;
    if ((((((((local_28._8_8_ - local_28._0_8_ & 0xfffffffffffffff0) == 0xe0) &&
            (*(longlong *)(local_28._0_8_ + 8) == 8)) &&
           (**(longlong **)local_28._0_8_ == 0x797469746e656469)) &&
          (*(longlong *)(local_28._0_8_ + 0x48) == 1)) &&
         ((**(char **)(local_28._0_8_ + 0x40) == '0' ||
          ((*(longlong *)(local_28._0_8_ + 0x48) == 1 && (**(char **)(local_28._0_8_ + 0x40) == '1')
           ))))) && (*(longlong *)(local_28._0_8_ + 0x58) == 1)) &&
       ((**(char **)(local_28._0_8_ + 0x50) == '0' ||
        ((*(longlong *)(local_28._0_8_ + 0x58) == 1 && (**(char **)(local_28._0_8_ + 0x50) == '1')))
        ))) {
      uVar5 = 1;
      uVar3 = (longlong)(local_28._8_8_ - local_28._0_8_) >> 4;
      plVar4 = (longlong *)local_28._0_8_;
      if (1 < uVar3) {
        do {
          local_38 = plVar4[2];
          lStack_30 = plVar4[3];
          cVar2 = FUN_180164a60(&local_38,0);
          if (cVar2 == '\0') break;
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 2;
        } while (uVar5 < uVar3);
      }
    }
    if ((longlong *)uVar1 != (longlong *)0x0) {
      plVar4 = (longlong *)uVar1;
      if ((0xfff < (local_18 - uVar1 & 0xfffffffffffffff0U)) &&
         (plVar4 = *(longlong **)(uVar1 + -8), 0x1f < (ulonglong)(uVar1 + (-8 - (longlong)plVar4))))
      {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(plVar4);
    }
  }
}



