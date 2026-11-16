// FUN_18015e690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015e690 */

longlong * FUN_18015e690(longlong *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = (longlong)&DAT_18070068c;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  FUN_180151d10((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_1 + 2,0);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_180141650(param_1 + 2);
  lVar2 = FUN_180141590(param_1 + 2,param_2,param_3 | 1);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    uVar1 = 4;
    if (*(longlong *)(lVar2 + 0x48 + (longlong)param_1) != 0) {
      uVar1 = 0;
    }
    uVar1 = uVar1 | *(uint *)(lVar2 + 0x10 + (longlong)param_1) & 0x15 | 2;
    *(uint *)(lVar2 + 0x10 + (longlong)param_1) = uVar1;
    uVar1 = uVar1 & *(uint *)(lVar2 + 0x14 + (longlong)param_1);
    if (uVar1 != 0) {
      if ((uVar1 & 4) == 0) {
        pcVar4 = "ios_base::failbit set";
        if ((uVar1 & 2) == 0) {
          pcVar4 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar4 = "ios_base::badbit set";
      }
      uVar3 = FUN_1801597e0(local_68,1);
      FUN_1801596c0(local_58,pcVar4,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_58,&DAT_1808d0f18);
    }
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  return param_1;
}



