#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf8cdd757, "module_layout" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x8a3ab7ed, "__napi_schedule" },
	{ 0x85df9b6c, "strsep" },
	{ 0x1030cd3d, "eth_type_trans" },
	{ 0xc29d929c, "napi_gro_receive" },
	{ 0x61704c0d, "single_release" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4f13dc57, "skb_queue_tail" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xcd484c36, "cfg80211_mgmt_tx_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5675e190, "pci_enable_msi" },
	{ 0xa82e0a33, "proc_mkdir_data" },
	{ 0xb6fc7fb2, "dev_get_by_name" },
	{ 0xd34cd378, "wiphy_apply_custom_regulatory" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x91715312, "sprintf" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xf6429547, "cfg80211_rx_mgmt" },
	{ 0x7c5f4d10, "napi_disable" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe8624fbd, "dma_direct_unmap_page" },
	{ 0xef045c19, "free_netdev" },
	{ 0x2ae3a5fb, "__cfg80211_alloc_reply_skb" },
	{ 0xb7599631, "unregister_netdevice_queue" },
	{ 0x67b4bbab, "kfree_skb" },
	{ 0x8a0af336, "__pskb_copy_fclone" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x364983f2, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x13790fe0, "netif_receive_skb" },
	{ 0x760a0f4f, "yield" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x513ad534, "alloc_etherdev_mqs" },
	{ 0x2673ed49, "cfg80211_new_sta" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x4d89ab10, "pci_write_config_word" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8057466b, "dma_set_coherent_mask" },
	{ 0x51adffd1, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5db4657, "flush_signals" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf2921dd, "cfg80211_inform_bss_frame_data" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x8c651204, "ieee80211_get_channel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x1e01660e, "vsnprintf" },
	{ 0xbf11ea67, "dev_alloc_name" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe668f4c7, "pci_enable_device" },
	{ 0x271aa840, "pci_disable_msi" },
	{ 0x2c6e8018, "netif_carrier_on" },
	{ 0x236e2172, "cfg80211_unlink_bss" },
	{ 0x172d2074, "pci_restore_state" },
	{ 0x90a9fe8, "__dev_kfree_skb_any" },
	{ 0x11755ecb, "proc_create_data" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x42b721e9, "find_vpid" },
	{ 0x1000e51, "schedule" },
	{ 0x94ca0b57, "skb_push" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xed567f0c, "pci_write_config_byte" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x3aae8117, "kill_pid" },
	{ 0xab9c4857, "skb_trim" },
	{ 0xdb9a89d2, "pci_iomap" },
	{ 0x8a0c1855, "cfg80211_connect_done" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x9202ba1c, "current_task" },
	{ 0xaa7e9c40, "pci_iounmap" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb9964ceb, "netif_napi_add" },
	{ 0xcf2a6966, "up" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6aee3d4e, "register_netdev" },
	{ 0x3f8a0816, "cfg80211_put_bss" },
	{ 0x2d9b24a9, "cfg80211_roamed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd047076e, "remove_proc_entry" },
	{ 0x3ccf6b33, "pci_set_power_state" },
	{ 0xd1697ff7, "pci_release_regions" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xeb21ce12, "cfg80211_scan_done" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8d340b10, "napi_complete_done" },
	{ 0x83e0ea3f, "dma_free_attrs" },
	{ 0x31eefbfe, "__pci_register_driver" },
	{ 0xbef6693c, "pci_save_state" },
	{ 0x98600ced, "seq_read" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xa1b52f28, "netif_carrier_off" },
	{ 0xdb792a1b, "param_ops_uint" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x3c6947f4, "pci_unregister_driver" },
	{ 0xdc1e5ca7, "kthread_create_on_node" },
	{ 0xc00d5473, "wake_up_process" },
	{ 0x2caf1003, "register_netdevice" },
	{ 0x525a244e, "seq_lseek" },
	{ 0xea2257cf, "PDE_DATA" },
	{ 0xb945b867, "skb_copy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6d688605, "param_ops_charp" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xe0da1a0e, "skb_copy_bits" },
	{ 0x9166fada, "strncpy" },
	{ 0x8c015133, "cfg80211_ibss_joined" },
	{ 0x591e6107, "netif_rx" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xdea8077e, "skb_dequeue" },
	{ 0xf5528e2f, "cfg80211_michael_mic_failure" },
	{ 0x60af0d5b, "netif_tx_wake_queue" },
	{ 0x5fdebff5, "dma_set_mask" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x49c1ef67, "cfg80211_disconnected" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x3e18c761, "kthread_stop" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xa29abf62, "init_net" },
	{ 0xff07072f, "__cfg80211_send_event_skb" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0x37a0cba, "kfree" },
	{ 0x420ecfe3, "seq_printf" },
	{ 0x29361773, "complete" },
	{ 0xd4a2f033, "cfg80211_get_bss" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x86b97156, "wiphy_new_nm" },
	{ 0x109bf554, "param_array_ops" },
	{ 0x72e01031, "wiphy_free" },
	{ 0xd97655d6, "dma_alloc_attrs" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xabb0f414, "seq_open" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x6bdc1f11, "proc_get_parent_data" },
	{ 0xa916b694, "strnlen" },
	{ 0x7a647762, "dma_ops" },
	{ 0x5cb6c24c, "kernel_read" },
	{ 0x5bce0a2a, "skb_put" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9f984513, "strrchr" },
	{ 0xa4500b2b, "cfg80211_ready_on_channel" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x82048e48, "pci_read_config_byte" },
	{ 0xf1b501ca, "skb_clone" },
	{ 0x5a921311, "strncmp" },
	{ 0xaf462961, "filp_close" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb0e602eb, "memmove" },
	{ 0x468cfc92, "cfg80211_ch_switch_notify" },
	{ 0x7741285b, "pci_read_config_dword" },
	{ 0xe222cb8, "param_ops_int" },
	{ 0xad0cc62f, "napi_schedule_prep" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x46a5e192, "single_open" },
	{ 0xfb578fc5, "memset" },
	{ 0xd6025ada, "__pskb_pull_tail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf3fca22, "dma_direct_map_page" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x34b6f31f, "filp_open" },
	{ 0x28318305, "snprintf" },
	{ 0x6889de34, "wiphy_unregister" },
	{ 0xe0121493, "seq_release" },
	{ 0x514547f1, "netif_tx_stop_all_queues" },
	{ 0x8aa3bd4d, "pci_choose_state" },
	{ 0x973e445a, "cfg80211_del_sta_sinfo" },
	{ 0xb32a9970, "pci_disable_device" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe65c854e, "cfg80211_vendor_cmd_reply" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x696246f, "__netdev_alloc_skb" },
	{ 0x17aba2d6, "pci_set_master" },
	{ 0x11089ac7, "_ctype" },
	{ 0x27e1a049, "printk" },
	{ 0x60d29e61, "nla_put_nohdr" },
	{ 0xb4499755, "pci_read_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd8ba38b8, "cfg80211_remain_on_channel_expired" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x5a208d28, "wiphy_register" },
	{ 0x796e7cc0, "__cfg80211_alloc_event_skb" },
	{ 0x999e8297, "vfree" },
	{ 0x599a521e, "netif_napi_del" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x98bd7f6, "skb_pull" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("pci:v000010ECd0000C821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000C82Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000C82Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0D5B32774F70C35AD7DB67C");
MODULE_INFO(rhelversion, "8.0");
