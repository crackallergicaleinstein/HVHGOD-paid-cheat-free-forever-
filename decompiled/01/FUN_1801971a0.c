// FUN_1801971a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801971a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801971a0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined8 *local_48;
  ulonglong local_40 [3];
  char local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined8 *)0x0;
  UVar4 = GetTickCount64();
  plVar1 = DAT_180bb9058;
  plVar6 = (longlong *)*DAT_180bb9058;
  if (plVar6 != DAT_180bb9058) {
    uVar9 = 0;
    uVar10 = 0xf;
    do {
      uVar8 = plVar6[2];
      local_40[0] = uVar8;
      if ((uVar8 != 0) &&
         (((uVar8 != DAT_180bbe8c8 || (DAT_180b0b4d8 != '\0')) && (UVar4 < DAT_180bb9090)))) {
        cVar2 = FUN_1801acc90(&DAT_180bb9050,local_40);
        if (cVar2 != '\0') {
          pcVar7 = local_24 + 1;
          do {
            pcVar7 = pcVar7 + -1;
            uVar5 = uVar8 / 10;
            *pcVar7 = (char)uVar8 + (char)uVar5 * -10 + '0';
            uVar8 = uVar5;
          } while (uVar5 != 0);
          FUN_18015bdb0(&local_78,pcVar7,local_24 + 1);
          if ((undefined8 *)local_58._8_8_ == local_48) {
            FUN_18017bcb0(local_58,local_58._8_8_,&local_78);
          }
          else {
            *(ulonglong *)local_58._8_8_ = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(local_58._8_8_ + 8) = uStack_70;
            *(undefined8 *)(local_58._8_8_ + 0x10) = uStack_68;
            *(undefined8 *)(local_58._8_8_ + 0x18) = uStack_60;
            local_78 = 0;
            local_58._8_8_ = (undefined8 *)(local_58._8_8_ + 0x20);
            uStack_68 = uVar9;
            uStack_60 = uVar10;
          }
          FUN_18015c010(&local_78);
        }
      }
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != plVar1);
  }
  FUN_1801b4c40(local_58._0_8_,local_58._8_8_,(longlong)(local_58._8_8_ - local_58._0_8_) >> 5,0);
  iVar3 = FUN_1805f68d0(&DAT_1808da720);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da76c == 0x7fffffff) {
    DAT_1808da76c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_180111b90(&DAT_180bbe920);
  DAT_180bbe920 = local_58._0_8_;
  DAT_180bbe928 = local_58._8_8_;
  _DAT_180bbe930 = local_48;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined8 *)0x0;
  DAT_180bbe938 = DAT_180bb9090;
  FUN_1805f68fc(&DAT_1808da720);
  FUN_180111b90(local_58);
}



