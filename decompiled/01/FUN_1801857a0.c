// FUN_1801857a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801857a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801857a0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined1 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_1d8 [48];
  ulonglong local_1a8;
  undefined8 local_1a0;
  longlong local_198 [2];
  byte local_188 [160];
  undefined **local_e8 [12];
  ulonglong local_88;
  uint local_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (*param_3 != param_3[1]) {
    param_3[1] = *param_3;
  }
  local_1a0 = param_4;
  FUN_18063ab10(local_198,0,0x110);
  FUN_18015e690(local_198,param_1,0x20);
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  iVar4 = FUN_1805fb620(param_1,&local_68,9,0xffffffff);
  uVar5 = local_60;
  if ((iVar4 == 0) && (local_60 - 0x10 < 0xffffff1)) {
    local_78 = (undefined1  [16])0x0;
    FUN_1801771e0(local_198,local_78,0x10);
    local_1a8 = (ulonglong)(uint)local_78._8_4_ + 8;
    uVar3 = local_78._12_4_;
    if (((local_188[*(int *)(local_198[0] + 4)] & 6) == 0) && (local_78._4_2_ == 0xc)) {
      if (((((uint)local_78._0_4_ <= uVar5) && (0xf < (uint)local_78._0_4_)) &&
          (local_78._12_4_ - 1 < 0x80)) &&
         ((0xf < local_1a8 &&
          ((uint)(local_78._12_4_ * 0xc) + local_1a8 <= (ulonglong)(uint)local_78._0_4_)))) {
        bVar1 = false;
        uVar6 = 0;
        if (local_78._12_4_ != 0) {
          do {
            uVar5 = uVar6 * 0xc + local_1a8;
            local_60 = 0;
            local_58 = 0;
            local_68 = uVar5;
            FUN_180176fb0(local_198,&local_68);
            local_88 = 0;
            local_80 = 0;
            FUN_1801771e0(local_198,&local_88,0xc);
            uVar2 = local_80;
            uVar5 = uVar5 + (local_88 >> 0x20) + 4;
            if ((local_188[*(int *)(local_198[0] + 4)] & 6) != 0) goto LAB_180185a30;
            if (((uint)local_78._0_4_ < uVar5) ||
               ((uint)local_78._0_4_ - uVar5 < (ulonglong)local_80)) goto LAB_180185a30;
            if ((param_2[1] == 4) && ((int)local_88 == *(int *)*param_2)) {
              if ((bVar1) || (0x800000 < local_80)) goto LAB_180185a30;
              bVar1 = true;
              FUN_1801acf20(param_3,local_80);
              local_60 = 0;
              local_58 = 0;
              local_68 = uVar5;
              FUN_180176fb0(local_198,&local_68);
              FUN_1801771e0(local_198,*param_3,uVar2);
              if ((local_188[*(int *)(local_198[0] + 4)] & 6) != 0) goto LAB_180185a30;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)uVar3);
          param_4 = local_1a0;
        }
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = !bVar1;
        }
      }
    }
  }
LAB_180185a30:
  *(undefined ***)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4) + -4) =
       *(int *)(local_198[0] + 4) + -0xb0;
  FUN_1800f63e0(local_188);
  *(undefined ***)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4) + -4) =
       *(int *)(local_198[0] + 4) + -0x18;
  local_e8[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_e8);
}



