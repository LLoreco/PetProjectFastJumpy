mergeInto(LibraryManager.library, {

  ShowAdv: function () {
        ysdk.adv.showFullscreenAdv({
        callbacks: {
            onClose: function(wasShown) {
              // some action after close
            },
            onError: function(error) {
              // some action on error
            }
        }
    })
  },

  SetToLeader: function(value) {
    ysdk.getLeaderboards()
    .then(lb => {
      // Без extraData
      lb.setLeaderboardScore('Time', value);
    });
  }

});