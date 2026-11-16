// FUN_180460940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180460940 */

longlong FUN_180460940(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  FUN_18063ab10(param_1,0,0xa8);
  lVar3 = 2;
  puVar2 = (undefined4 *)(param_1 + 8);
  do {
    puVar2[-2] = *(undefined4 *)((longlong)&UNK_18077f808 + -param_1 + (longlong)puVar2);
    puVar2[-1] = *(undefined4 *)(((longlong)&UNK_18077f80c - param_1) + (longlong)puVar2);
    *puVar2 = *(undefined4 *)((longlong)&DAT_18077f810 + -param_1 + (longlong)puVar2);
    puVar2[1] = *(undefined4 *)(((longlong)&DAT_18077f814 - param_1) + (longlong)puVar2);
    puVar2[2] = *(undefined4 *)(((longlong)&DAT_18077f818 - param_1) + (longlong)puVar2);
    puVar2[3] = *(undefined4 *)(((longlong)&DAT_18077f81c - param_1) + (longlong)puVar2);
    puVar2[4] = *(undefined4 *)(((longlong)&DAT_18077f820 - param_1) + (longlong)puVar2);
    puVar2[5] = *(undefined4 *)(((longlong)&DAT_18077f824 - param_1) + (longlong)puVar2);
    puVar2[6] = *(undefined4 *)(((longlong)&DAT_18077f828 - param_1) + (longlong)puVar2);
    puVar2[7] = *(undefined4 *)(((longlong)&DAT_18077f82c - param_1) + (longlong)puVar2);
    puVar2[8] = *(undefined4 *)((longlong)puVar2 + ((longlong)&DAT_18077f830 - param_1));
    puVar2[9] = *(undefined4 *)((longlong)puVar2 + ((longlong)&DAT_18077f834 - param_1));
    puVar2[10] = *(undefined4 *)(((longlong)&DAT_18077f838 - param_1) + (longlong)puVar2);
    puVar1 = puVar2 + 0x15;
    puVar2[0xb] = *(undefined4 *)
                   (((longlong)&PTR_s_Minimal_Wear_18077f7e8 - param_1) + (longlong)puVar1);
    puVar2[0xc] = *(undefined4 *)((0x18077f7ec - param_1) + (longlong)puVar1);
    puVar2[0xd] = *(undefined4 *)
                   (((longlong)&PTR_s_Field_Tested_18077f7f0 - param_1) + (longlong)puVar1);
    puVar2[0xe] = *(undefined4 *)((0x18077f7f4 - param_1) + (longlong)puVar1);
    puVar2[0xf] = *(undefined4 *)
                   (((longlong)&PTR_s_Well_Worn_18077f7f8 - param_1) + (longlong)puVar1);
    puVar2[0x10] = *(undefined4 *)((0x18077f7fc - param_1) + (longlong)puVar1);
    puVar2[0x11] = *(undefined4 *)
                    (((longlong)&PTR_s_Battle_Scarred_18077f800 - param_1) + (longlong)puVar1);
    puVar2[0x12] = *(undefined4 *)((0x18077f804 - param_1) + (longlong)puVar1);
    lVar3 = lVar3 + -1;
    puVar2 = puVar1;
  } while (lVar3 != 0);
  return param_1;
}



